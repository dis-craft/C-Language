#include <stdio.h>

int x=5; // global declaration

void myfunction() {
    int a =5;
    printf("%d", ++x);
}

int main() {
    // printf("%d", a); since a is a local var not in this function, printing this is compilation error
    myfunction();
    return 0;
}