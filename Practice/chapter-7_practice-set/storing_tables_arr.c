#include <stdio.h>

int main() {
    int tables[10];
    //tables:
    for (int i = 0; i < 10; i++) {
        tables[i] = (i+1)*5; 
    }   
    for(int j = 0 ; j<=10 ; j++){
            printf("%d\n", tables[j]);
        }
    return 0;
}