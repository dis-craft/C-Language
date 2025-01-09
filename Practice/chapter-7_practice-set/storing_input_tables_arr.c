#include <stdio.h>

int main() {
    int n;
    int tables[10];
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(int i = 1; i<11 ; i++){
        tables[i] = i*n;
    }
    for(int j=1; j<11 ; j++){
    // printf("Hello\n");
    printf("%d\n",tables[j]);
    }
    // printf("%d", tables[0]); -> garbage value.
    return 0;

}