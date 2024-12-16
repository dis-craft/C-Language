#include <stdio.h>

void readarr(int arr[10][10], int m, int n){
    printf("Enter the elements of the array:\n");
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}
void writearr(int arr[10][10], int m, int n){
    int transpose[10][10];
            printf("The transposed matrix is:\n"); //transpose
    for(int i=0; i<m;i++){ 
        printf("\n");
        for(int j=0; j<n; j++){
            transpose[i][j] = arr[j][i];
            printf("\t%d", transpose[i][j]); //transpose
        }
    }
}


int main() {
    int arr[10][10];
    int transpose[10][10];
    int c,d;
    int m,n;
    printf("Enter the dimensions of the arr: ");
    scanf("%d%d", &m, &n);
    readarr(arr, m, n);
    writearr(arr, m, n);
    return 0;
}