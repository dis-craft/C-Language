#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LOGS 1000
#define MAX_USERNAME_LENGTH 100
#define MAX_IP_LENGTH 20

// Arrays to store the log details
char log_username[MAX_LOGS][MAX_USERNAME_LENGTH];
char log_ip[MAX_LOGS][MAX_IP_LENGTH];
char log_result[MAX_LOGS][10];  // "FAILURE" or "SUCCESS"
struct tm log_timestamp[MAX_LOGS];

// Arrays for tracking violations
char suspended_users[MAX_LOGS][MAX_USERNAME_LENGTH];
int suspended_user_count = 0;
char blacklisted_ips[MAX_LOGS][MAX_IP_LENGTH];
int blacklisted_ip_count = 0;
int failed_user_attempts[MAX_LOGS];  // Tracking failed login attempts for users
int failed_ip_attempts[MAX_LOGS];    // Tracking failed login attempts for IPs
time_t user_timeouts[MAX_LOGS];      // Tracking user timeout times
int user_timeout_count = 0;

int get_seconds_since(struct tm *tm) {
    time_t now = time(NULL);
    struct tm current_time = *localtime(&now);
    tm->tm_hour -= current_time.tm_hour;
    tm->tm_min -= current_time.tm_min;
    tm->tm_sec -= current_time.tm_sec;
    return mktime(tm);
}

void parse_log_entry(char *log_entry, int index) {
    struct tm tm;
    char timestamp_str[30];
    sscanf(log_entry, "%s %s %s %s", timestamp_str, log_username[index], log_ip[index], log_result[index]);
    strptime(timestamp_str, "%Y-%m-%dT%H:%M:%SZ", &tm);
    log_timestamp[index] = tm;
}

void track_security_violations() {
    char buffer[256];
    
    // Read number of logs
    fgets(buffer, sizeof(buffer), stdin);
    int total_logs;
    sscanf(buffer, "%d", &total_logs);

    if (total_logs <= 0) {
        printf("NO_VIOLATION\n");
        return;
    }

    // Read the log entries
    for (int i = 0; i < total_logs; ++i) {
        fgets(buffer, sizeof(buffer), stdin);
        parse_log_entry(buffer, i);
    }

    // Loop through logs to track violations
    for (int i = 0; i < total_logs; ++i) {
        int found_violation = 0;
        
        // Check if user is suspended
        for (int j = 0; j < suspended_user_count; ++j) {
            if (strcmp(log_username[i], suspended_users[j]) == 0) {
                if (get_seconds_since(&log_timestamp[i]) < user_timeouts[j]) {
                    printf("SUSPENSION_VIOLATION %d-%02d-%02dT%02d:%02d:%02dZ %s %s\n",
                           log_timestamp[i].tm_year + 1900, log_timestamp[i].tm_mon + 1,
                           log_timestamp[i].tm_mday, log_timestamp[i].tm_hour,
                           log_timestamp[i].tm_min, log_timestamp[i].tm_sec,
                           log_username[i], log_ip[i]);
                    found_violation = 1;
                    break;
                }
            }
        }
        
        // Check if the user is locked out
        if (!found_violation) {
            for (int j = 0; j < user_timeout_count; ++j) {
                if (strcmp(log_username[i], log_username[j]) == 0) {
                    if (get_seconds_since(&log_timestamp[i]) < user_timeouts[j]) {
                        printf("LOCKOUT_VIOLATION %d-%02d-%02dT%02d:%02d:%02dZ %s %s\n",
                               log_timestamp[i].tm_year + 1900, log_timestamp[i].tm_mon + 1,
                               log_timestamp[i].tm_mday, log_timestamp[i].tm_hour,
                               log_timestamp[i].tm_min, log_timestamp[i].tm_sec,
                               log_username[i], log_ip[i]);
                        found_violation = 1;
                        break;
                    }
                }
            }
        }

        // Check if IP is blacklisted
        if (!found_violation) {
            for (int j = 0; j < blacklisted_ip_count; ++j) {
                if (strcmp(log_ip[i], blacklisted_ips[j]) == 0) {
                    if (get_seconds_since(&log_timestamp[i]) < user_timeouts[j]) {
                        printf("BLACKLIST_VIOLATION %d-%02d-%02dT%02d:%02d:%02dZ %s %s\n",
                               log_timestamp[i].tm_year + 1900, log_timestamp[i].tm_mon + 1,
                               log_timestamp[i].tm_mday, log_timestamp[i].tm_hour,
                               log_timestamp[i].tm_min, log_timestamp[i].tm_sec,
                               log_username[i], log_ip[i]);
                        found_violation = 1;
                        break;
                    }
                }
            }
        }

        // Handle failure case
        if (!found_violation && strcmp(log_result[i], "FAILURE") == 0) {
            failed_user_attempts[i]++;
            if (failed_user_attempts[i] >= 10) {
                printf("SUSPENSION_VIOLATION %d-%02d-%02dT%02d:%02d:%02dZ %s %s\n",
                       log_timestamp[i].tm_year + 1900, log_timestamp[i].tm_mon + 1,
                       log_timestamp[i].tm_mday, log_timestamp[i].tm_hour,
                       log_timestamp[i].tm_min, log_timestamp[i].tm_sec,
                       log_username[i], log_ip[i]);
                strcpy(suspended_users[suspended_user_count], log_username[i]);
                suspended_user_count++;
                user_timeouts[user_timeout_count] = get_seconds_since(&log_timestamp[i]) + 300;
                user_timeout_count++;
                found_violation = 1;
            }
            // Further checks for lockouts and blacklisting
            if (!found_violation) {
                for (int j = 0; j < blacklisted_ip_count; ++j) {
                    if (strcmp(log_ip[i], blacklisted_ips[j]) == 0) {
                        if (get_seconds_since(&log_timestamp[i]) < user_timeouts[j]) {
                            printf("BLACKLIST_VIOLATION %d-%02d-%02dT%02d:%02d:%02dZ %s %s\n",
                                   log_timestamp[i].tm_year + 1900, log_timestamp[i].tm_mon + 1,
                                   log_timestamp[i].tm_mday, log_timestamp[i].tm_hour,
                                   log_timestamp[i].tm_min, log_timestamp[i].tm_sec,
                                   log_username[i], log_ip[i]);
                            found_violation = 1;
                            break;
                        }
                    }
                }
            }
        }
    }

    // If no violations, print "NO_VIOLATION"
    if (!found_violation) {
        printf("NO_VIOLATION\n");
    }
}

int main() {
    track_security_violations();
    return 0;
}
