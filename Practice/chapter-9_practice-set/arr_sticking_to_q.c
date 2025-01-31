/*
Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from 
the user.
*/
#include <stdio.h>

struct complex_number {
    int realpart;
    int imaginary;
};

void display(struct complex_number c) {
    printf("%d + %di\n", c.realpart, c.imaginary);
}

int main() {
    struct complex_number c[5]; 

    printf("Enter the real and imaginary values of 5 complex numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d %d", &c[i].realpart, &c[i].imaginary);
        display(c[i]); 
    }

    return 0;
}
