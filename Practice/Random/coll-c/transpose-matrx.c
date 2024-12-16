#include <stdio.h>

void readarr(int arr[10][10], int m, int n){
    printf("Enter the elements of the array:\n");
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}
void writearr(int arr[10][10], int m, int n, int x){
    if(x==0){
    printf("The normal matrix is:\n"); 
    for(int i=0; i<m;i++){ 
        printf("\n");
        for(int j=0; j<n; j++){
            printf("\t%d", arr[i][j]); //normal
        }
    }
    }
    else{
    printf("\n The transposed matrix is:\n"); 
    int transpose[10][10];
    for(int i=0; i<m;i++){ 
        printf("\n");
        for(int j=0; j<n; j++){
            transpose[i][j] = arr[j][i];
            printf("\t%d", transpose[i][j]); //transpose
        }
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
    writearr(arr, m, n, 0);
    writearr(arr, m, n, 1);
    return 0;
}