#include <stdio.h>

int main() {
    int x = 5;    //global declaration
    void myfun(){
        printf("%d", x); // x can be used here as well 
    }
    int main(){
        printf("%d", x); // x can be used here as well
    }
    return 0;
}