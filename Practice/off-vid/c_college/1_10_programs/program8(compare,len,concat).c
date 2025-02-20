/*Write functions to implement string operations such as compare,
concatenate, string length. Convince the parameter passing techniques*/

#include <stdio.h>
#include <string.h>

void compare(char str1[], char str2[])
{
    int i;
    i = strcmp(str1, str2);

    if (i == 0)
        printf("strings are equal\n");
    else
        printf("strings are not equal\n");
}

void concat(char str1[], char str2[])
{
    strcat(str1, str2);
    printf("concatenate string=%s", str1);
}

void length(char *str1[], char *str2[])
{
    int len1;
    int len2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("the length of string=%d", len1);
    printf("the length of string=%d", len2);
}

int main()
{
    int n, digit;
    char str1[10], str2[10];

    printf("enter first string=");
    scanf("%s", str1);

    printf("enter second string=");
    scanf("%s", str2);

    do
    {
        printf("press 1-compare 2-concatenate 3-length of string\n");
        printf("enter your choice=");
        scanf("%d", &n);

        switch (n)
        {
            case 1:
                compare(str1, str2);
                break;
            case 2:
                concat(str1, str2);
                break;
            case 3:
                length(str1,str2);
                break;
            default:
                printf("wrong choice\n");
                break;
        }

        printf("\n Do you want to continue (1/0)? ");
        scanf("%d", &digit);
    } while (digit == 1);
    return 0;
}

// Output:
// enter first string=Ram
// enter second string=Ram
// press 1-compare 2-concatenate 3-length of string