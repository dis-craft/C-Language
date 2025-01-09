#include <stdio.h>

int main() {
    int i = 40;
    int k = 20;
    printf("The address of i is: %p\n", &i); // %p for address of pointer!, %u for viewing in int format
    printf("The value of i is: %d\n", *(&i)); 
    int* b = &k; //b is a pointer pointing towards k.
    int* a = &i; //a is a pointer pointing towards i.
    printf("%p\n", a);
    printf("%p\n", b);
    return 0;
} 