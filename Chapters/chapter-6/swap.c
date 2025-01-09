#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d\n", *a);
    printf("b = %d\n", *b);
}

int main() {
    int a = 5, b = 10;
    swap(&a, &b);
    printf("the value of a is %d, b is %d\n", a, b);
    return 0;
}