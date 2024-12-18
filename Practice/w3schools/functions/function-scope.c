#include <stdio.h>

    int x=5; //globally declared variable

    void myfunction() {
        printf("%d", x); // x can be used here as well
    }

    int main(){
        printf("%d", x); // x can be used here as well
    }
