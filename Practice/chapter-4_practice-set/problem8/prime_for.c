#include <stdio.h>

int main() {
    int i, n, prime=0;
    scanf("%d", &n);
    for(i=2; i<n ; i++){
        if(n%i==0){
            prime = 1;
            break;
        }
    }
        if(prime)
            printf("%d is not a prime number.\n",n);
        else
            printf("%d is prime number.", n);
    return 0;
}