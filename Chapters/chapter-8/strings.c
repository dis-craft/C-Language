#include <stdio.h>

int main() {
    char str[] = {'S','R','I','K','A','R'};
    // char str2[] = {};
    char strs[] = "Srikar!";
    printf("%c %c\n", str[0], str[1]);
    for(int i = 0; i<7; i++){
    printf("%c", strs[i]);
    }
    return 0;
}