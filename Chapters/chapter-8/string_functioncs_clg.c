/*Write functions to implement string operations such as compare,
concatenate, string length. Convince the parameter passing techniques*/
#include <stdio.h>
#include <string.h>

void comp(char a[], char b[]) {
    int result = strcmp(a, b);
    if (result == 0)
        printf("The strings are equal!\n");
    else
        printf("The strings are not equal!\n");
}

void len(char a[], char b[]) {
    printf("The length of the string '%s' is: %d\n", a, (int)strlen(a));
    printf("The length of the string '%s' is: %d\n", b, (int)strlen(b));
}

void concat(char a[], char b[]) {
    // Ensure no overflow occurs when concatenating
    if (strlen(a) + strlen(b) < 20) {
        strcat(a, b);
        printf("Concatenated string is: %s\n", a);
    } else {
        printf("Concatenation would exceed buffer size! Operation not performed.\n");
    }
}

void main() {
    char string1[20], string2[20];
    int choice, n;

    printf("Enter first string (max 19 characters): \n");
    scanf("%19s", string1);
    printf("Enter second string (max 19 characters): \n");
    scanf("%19s", string2);

    do {
        printf("\nEnter your choice: 1-Compare, 2-Concatenate, 3-Length\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                comp(string1, string2);
                break;
            case 2:
                concat(string1, string2);
                break;
            case 3:
                len(string1, string2);
                break;
            default:
                printf("Invalid choice! Please select 1, 2, or 3.\n");
        }

        printf("\nDo you want to continue? Enter 1 for Yes, 0 for No: ");
        scanf("%d", &n);
    } while (n == 1);
}
