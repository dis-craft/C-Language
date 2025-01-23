#include <stdio.h>
//string is a 1D character terminated by a null character.
//Character array elements are contiguos memory allocation.


int main() {
    char string[] = {'a','b','c', '\0'}; //if we are assigning individual characters then we need to specify the null character.
    char string2[] = "hello123";
    char str[10];
    printf("%c \n", string[2]);
    printf("%c \n", string2[2]);
    printf("%s\n", string);
    printf("%s\n", string2);
    printf("Enter the value of the string!\n");
    scanf("%s" , str);
    printf("%s\n", str);
    return 0;
} 