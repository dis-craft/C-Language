#include <stdio.h>

int main() {
    int n, i = 2;
    int not_prime = 0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    while(i<n){
        if(n%i == 0){
            not_prime = 1;
            break;
        }
            i++;                                                                                                    
    }
    if(not_prime)
        printf("%d is not a prime number", n);
    else
        printf("%d is a prime number.", n);

    return 0;
}