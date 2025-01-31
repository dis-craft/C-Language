/*
Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from 
the user.
*/
#include <stdio.h>

typedef struct complex_number{
    int realpart;
    int imaginary;
}COMP;

int main() {
    COMP c[4];
    int array_complex_no_real[4];
    int array_complex_no_imagi[4];
    printf("Enter the real and imaginary values of complex numbers: \n");
    for(int i=0; i<5 ; i++){
        array_complex_no_real[i] = c[i].realpart;
        array_complex_no_real[i] = c[i].imaginary;
        scanf("%d %d", &array_complex_no_real[i], &array_complex_no_imagi[i]);
        printf("%d + %di", array_complex_no_real[i],array_complex_no_imagi[i]);
    }

    return 0;
}