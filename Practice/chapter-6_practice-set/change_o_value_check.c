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
    printf("The value of a but ten times is: %d", &a);
    multiplier(a);
    printf("The value of a but ten times is: %d", a);

    return 0;
}

//cannot call a function by value when its already a call by address function.