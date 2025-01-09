#include <stdio.h>

int main() {
    int marks[5];
    printf("Enter the marks of 5 subjects!");
    // scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
    // printf("%d %d %d %d %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
    for(int i = 0; i<5 ; i++){
        scanf("%d", &marks[i]);
    }
    for(int i = 0; i<5 ; i++){
        printf("%d\n", marks[i]);
    }
    
    return 0;
}