//logical AND , OR

#include <stdio.h>

void calculate() {
    int a,b;
    printf("Enter the value of a, b \n");
    scanf("%d %d", &a, &b);
    printf("The value of a AND b is: %d \n", a&&b); // && is AND operator, takes a boolean value that is 1-true, 0-false
    printf("The value of a OR b is: %d \n", a||b); // || is OR operator
    printf("The value of not(a) is: %d \n", !a); // || is OR operator
    printf("The value of not(b) is: %d \n", !b); // || is OR operator
    if(a && b){ // if both are true, then the if statement gets a value of 1, else 0-meaning the condition is false
        printf("Both a and b are true \n");
    }
    else if(a || b){ // this condition is true when either of a, b is true, if true returns a value of 1, else 0-meaning the condition is false
        printf("Either a or b is true \n");
    }
    else{ // if both are false, then this executes!
        printf("Both a and b are false \n");
    }
}

int main() {
    calculate();
    int n;
    printf("Do you want to run again? (1/0) \n");
    scanf("%d", &n);
    if(n==1){
        main();
    }
    else{
        printf("Thank you for using the program \n");
    }
    return 0;
}