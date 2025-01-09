#include <stdio.h>

int main() {
    int marks[] = {10,20,30};
    for(int i = 0; i<=2; i++){
        printf("the value of marks at location %d is %d, and its address is: %d\n", i, marks[i], &marks[i]);
    }    
    return 0;
}

//address of elements in arrays in contagious!