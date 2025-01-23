#include <stdio.h>
#include <string.h>
int main() {
    char string1[] = "Hello_there!";
    char string2[] = "This_is_srikar";
    char string3[100];
    strcpy(string3, string2);
    printf("%s \n", string3);
    strcat(string1, string2);
    printf("%s\n", string1);
    int a = strcmp(string1, string2);
    printf("%d", a); // negative(-1) if first value variable ascii is greater than 2nd, 
                    // positive(1) if the ascii value of the second variable is greater than 1st
                    // 0 is both are equal
    int len = strlen(string1);
    printf("\n %d", len);
    return 0;
}


//string functions
//strcmp, strcpy, strcat