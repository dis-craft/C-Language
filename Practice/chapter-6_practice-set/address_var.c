#include <stdio.h>

int main() {
    int n=100;
    int* pointer_of_n = &n;
    printf("The pointer of %d is %p\n", n, pointer_of_n);
    return 0;
}