#include <stdio.h>

void multiplefunc(char name[], int age){ //passing multiple parameters through a func
    printf("Hello %s! your age is: %d", name, age);
}

int main() {
    char inputname[10];
    int inputage;
    printf("Enter your name & age: \n");
    scanf("%s %d", &inputname, &inputage); 
    multiplefunc(inputname,inputage); // calling function while passing 2 inputted variables 
    return 0;
}