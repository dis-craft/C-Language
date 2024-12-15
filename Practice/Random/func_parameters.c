//program for using parameters in a function datatype: char.

#include <stdio.h>

void namefunction(char name[10]){ // syntax: return-type funcname(parameter-type parameter-sname)
    printf("Hello %s", name);
}

int main() {
    char inputname[10];
    char check[10]="check!"; //syntax to store a string in a char dt: use "".

    printf("Enter your name: \n");
    scanf("%s", &inputname);


//calling the function: 
    namefunction(check); //calling a variable.
    namefunction(inputname); //input variables can also be passed through the function.
    return 0;
}