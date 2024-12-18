#include <stdio.h>

int sum(int n) {
    if(n>0){
    return n+sum(n-1);
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("the sum of natural numbers from 1 to n is: %d", sum(n));
    return 0;
}