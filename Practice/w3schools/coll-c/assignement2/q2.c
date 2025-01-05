//Write a C program to check if a given number is even or odd
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2 == 0)
        printf("%d is an even number! \n", n);
    else
        printf("%d is an odd number! \n", n);
    return 0;
}

/*
Output:

Enter a number: 34
34 is an even number!

Enter a number: 17
17 is an odd number!

*/