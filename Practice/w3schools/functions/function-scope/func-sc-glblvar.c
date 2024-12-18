#include <stdio.h>

int x =5; //global declaration

void nonmain() {
    int x =3; //local var
    printf("%d\n", x); 
}

int main() {
    printf("In the main function the, x refers to global variable: %d\n", x);
    nonmain();
    return 0;
}