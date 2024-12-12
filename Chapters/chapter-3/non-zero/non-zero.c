#include <stdio.h>

int main() {
    if(0){ //0 is considered as false
        printf("Hello this will not be printed!"); 
    }
    if(1){
        printf("This will be printed!"); // anything other than zero is considered as true even char, float ex: if('c') if(2.0)
    }
    return 0;
}