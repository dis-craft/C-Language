#include <stdio.h>

int main() {
    int a = 10;
    if(a = 11){ //here a = 11 is a non-zero input to the if condition, hence if is executed
        printf("Hello!"); 
    }    
    else{
        printf("NO hello.");
    }
    return 0;
}