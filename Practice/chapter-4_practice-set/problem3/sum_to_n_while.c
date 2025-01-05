#include <stdio.h>

int main() {
    int n, i=1, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    while(i<=n){
        printf("%d\n", i);
        sum += i; // sum = sum + i;   
        i++;
    }    
    printf("Sum to n numbers is: %d\n", sum);
    return 0;
}