#include <stdio.h>

int main() {
    for(int i = 1; i <= 12; i++){
        if(i==5){
            continue; // skips this iteration
            break;// exits from the for loop
        }
        printf("i = %d \n", i);    
    }
    return 0;
}