//program to add 10+9+8+7... using recursive func
#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("the sum of natural numbers from 1 to %d is: %d",n, sum(n));
    return 0;
}

int sum(int n) {
    if(n>0){ //greater than 0 ensures the negative numbers are not looped
    return n + sum(n-1); //loop to add the numbers, using recursive func
    }
    else{
        return 0;
    }
}

//when running the program follow these steps: 

// 10 + sum(9)
// 10 + ( 9 + sum(8) )
// 10 + ( 9 + ( 8 + sum(7) ) )
// ...
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0