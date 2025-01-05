#include <stdio.h>

int main() {
    int n, sum=0;
    scanf("%d", &n);
    sum  = 0;
    for(int i=0; i<=n; i++){
        printf("%d\n", i);
        sum = sum + i;
    }    
    printf("Sum to n numbers using for loop: %d", sum);


    
    return 0;
}