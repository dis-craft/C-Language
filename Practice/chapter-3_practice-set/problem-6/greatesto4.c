//program to find greatest of 4 numbers:
#include <stdio.h>
int main() {
    int a,b,c,d;
    printf("Enter 4 numbers: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d)
        printf("%d is greatest.",a);
    else if(b>a && b>c && b>d)
        printf("%d is greatest.",b);
    else if(c>b && a<c && c>d)
        printf("%d is greatest.",c);
    else
        printf("%d is greatest.",d);
    return 0;
}