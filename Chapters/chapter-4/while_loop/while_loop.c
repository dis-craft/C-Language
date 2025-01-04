//printing hello world 10 times using while loop
#include <stdio.h>

void main() {
    int i=1;    
    while(i<=10){ // {}-> called as block of code, here block of code is iterated 10 times!
        printf("(%d) Hello world!\n", i);
        // i = i + 1; Either i = i + 1; or i++; can be used
        i++; // increament operator
    }
}