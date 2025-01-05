#include <stdio.h>

int main() {
    int n,j=0,s=0;
    scanf("%d", &n);
    do
    {
        printf("%d\n",j);
        s += j;
        j++;
    } while (j<=n);
        printf("Sum to n numbers using do-while is : %d\n", s);    
    return 0;
}