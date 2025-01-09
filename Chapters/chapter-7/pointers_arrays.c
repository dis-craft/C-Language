#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int* ptr = &a;
    int* ptr1 = &b;
    printf("the address of a is : %u\n", ptr);
    ptr++;
    printf("the address of a is : %u\n", ptr);
    printf("the address of b is : %u\n", ptr1);
    printf("the value of b is : %d\n", *ptr1);
    return 0;
}