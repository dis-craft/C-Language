#include <stdio.h>

int main() {
    int a = 10;
    int* pointer_a = &a;
    int** pointer_pointer_a = &pointer_a;
    printf("The value of pointer_a is: %d\n", *pointer_pointer_a);    
    printf("The value of a using the pointer to pointer is: %d\n", **pointer_pointer_a);    
    return 0;
}