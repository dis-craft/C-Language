#include <stdio.h>

void pattern(int n){
    for(int i=1; i <= n; i++){
        printf("\n");
        for(int j=0; j<2*i-1 ; j++){
            printf("*");
        }
        
    }
}

int main() {
    int n;
    scanf("%d", &n);
    pattern(n); 
    return 0;
}