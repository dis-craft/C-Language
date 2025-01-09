#include <stdio.h>

void display(int arr[3][3]){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[3][3];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    } 
    display(arr);
    return 0;
}