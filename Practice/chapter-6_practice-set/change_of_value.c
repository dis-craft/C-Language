#include <stdio.h>

int multiplier(int* a);

int multiplier(int* a){
    int ten_x;
    ten_x = 10*(*a);
    printf("The value of a but ten times is: %d", ten_x);
}

int main() {
    int a = 10;
    multiplier(&a);    
    return 0;
}