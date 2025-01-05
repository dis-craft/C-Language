#include <stdio.h>

int main() {
    int fac=1, n, i = 1;
    scanf("%d", &n);
    do{
        fac = fac * i;
        i++;
    }while(i<=n);    
    printf("%d", fac);
    return 0;
}