#include <stdio.h>

int main() {
    
    printf("Using for loop!: \n");
    
    for(int i=0;i<=10; i++){
        printf("(%d)Hello world!\n", i);
    }    

    printf("Using while loop!: \n");
    int n;
    n=0;
    while(n<10){
        printf("(%d) hello world!\n");
        n=n+1;
    }
    return 0;
}