#include <stdio.h>

typedef struct complex_number{
    int realpart;
    int imaginary;
}COMP;

int main() {
    COMP c1;
    c1.realpart = 2;
    c1.imaginary = 3;
    printf("The complex number is: %d + %di", c1.realpart, c1.imaginary);
    return 0;
}