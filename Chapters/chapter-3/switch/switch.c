#include <stdio.h>

int main() {
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    switch(a) {
        case 1:
            printf("a is 1");
            break;
        case 2:
            printf("a is 2");
            break;
        case 3:
            printf("a is 3");
            break;
        default:
            printf("Entered number is neither 1,2,3");
            break;
    }
    return 0;
}