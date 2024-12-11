#include <stdio.h>

int main() {
    float a = 9;
    int b = 2;
    float c = a/b;
    printf("The value of c is: %f \n", c);     

    // int (operator) int is int.
    // int (operator) float is float.
    // float over float is always float.

    int d = 6.8; 
    printf("The value of d is %d ", d); // demotion for due to type incompatibility
    return 0;
}