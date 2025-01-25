/*C program to check the given character is 
lowercase or uppercase or special character*/

#include <stdio.h>

int main() {
    char c;

    printf("Enter any character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("character is an upper case\n");
    } else if (c >= 'a' && c <= 'z') {
        printf("character is a lower case\n");
    } else if (c >= '0' && c <= '9') {
        printf("it is not a character\n");
    } else {
        printf("character is a special character\n");
    }

    return 0;
}