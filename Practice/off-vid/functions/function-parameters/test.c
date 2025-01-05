#include <stdio.h>

void print(int var){
    printf("The upper functions have called me to pass this:\n");
    printf("The sum is: %d", var);
}

void sum(int a, int b){
    int sum;
    sum = a+b;
    print(sum);
}

int main() {
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    sum(x, y);
    return 0;
}