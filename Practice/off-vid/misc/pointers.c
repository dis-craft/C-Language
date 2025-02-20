#include <stdio.h>

int main() {
    int a = 3;
    int b = 10;
    int ptr_b = &b;
    int *ptr = &a;
    int val = *ptr;
    printf("The address of using ptr is: %d\n", val);
    printf("The address of a in memory is: %d\n", &a);
    printf("The address of b in memory is: %d\n", &b);
    printf("The address of a in memory is: %d\n", *&a);
    printf("The address of a in memory is: %d\n", *&b);
    ptr_b++;
    printf("%d", *ptr_b);
    return 0;
}