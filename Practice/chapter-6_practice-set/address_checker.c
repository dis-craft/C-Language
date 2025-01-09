#include <stdio.h>

int my_func(int i);

int my_func(int i){
    int* pointer_of_i = &i;
    printf("The address of %d is %p outside of main function!\n", i, pointer_of_i);
}
// the address of a variable are different from function to function.
int main() {
    int i = 10;
    printf("The address of i is %p inside of main function!\n", &i);   
    my_func(i);
    return 0;
}