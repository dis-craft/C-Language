#include <stdio.h>

int sum(int* a){
    *a = 7;
    return *a;
}

int main() {
    int a = 1;
    // b = 2;
    printf("%d", sum(&a));
    return 0;
}