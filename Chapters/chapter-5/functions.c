#include <stdio.h>

int sum(int x, int y){
    printf("the sum is: %d\n", x+y);
    return 1;
}

int main() {
    int a,b;
    printf("Enter the value of a,b\n");
    scanf("%d%d", &a, &b);
    if(sum(a,b))
        main();
    else
        return 0;
}