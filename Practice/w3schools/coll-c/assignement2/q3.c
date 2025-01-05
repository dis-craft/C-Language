//Write a C program to determine if a person is eligible to vote

#include <stdio.h>

int main() {
    int age;
    printf("Enter your age!:\n");
    scanf("%d", &age);
    if(age>18)
        printf("You are eligible to vote!\n");
    else if(age==18)
        printf("You are eligible to vote, if you have your voter ID!");
    else
        printf("You are not eligible to vote!\n");
    return 0;
}

/*
Output: 

Enter your age!:
18
You are eligible to vote, if you have your voter ID!

Enter your age!:
16
You are not eligible to vote!
*/