//multiplication table of given number n

#include <stdio.h>
int main() {
    int n, i=1;
    
    printf("Enter the value n: \n");
    scanf("%d", &n);

    printf("using while loop: \n");
    printf("\n");
    while(i<11){
        printf("%d X %d = %d\n", n, i, n*i);
        i++;
    } 
    printf("\n");

    printf("using do-while loop: \n");
    printf("\n");
    int a = 1;
    do{
        printf("%d X %d = %d\n", n, a, n*a);
        a++;
    } while(a<11);
    printf("\n");

    
    printf("using for loop: \n");
    printf("\n");
    for(i=1; i<11 ; i++){
        printf("%d X %d = %d\n", n, i, n*i);
    }

    return 0;
}