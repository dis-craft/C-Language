#include <stdio.h>

int main() {
    int i=10,a=10,n;
    
    printf("Enter the value of N: \n");
    scanf("%d", &n);

    printf("Reverse tables using while loop: \n");
    while(i>0){
        printf("%d X %d = %d \n", n, i, n*i);
        i--;
    }

    printf("Reverse tables using do-while loop: \n");
    do
    {
        printf("%d X %d = %d \n", n, a, n*a);
        a--;
    } while (a>0);
    
    printf("Reverse tables using for loop: \n");
    for(int b=10 ; b>0 ; b--){
        printf("%d X %d = %d \n", n, b, n*b);
    }
    return 0;
}