#include <stdio.h>

int main() {
    int m,n,p,q, first[10][10], second[10][10], sum=0;
    int multi[10][10];
    
    printf("Enter the dimensions of first matrix");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of first matrix: ");
    for(int i=0; i<m  ; i++){
        for(int j=0; j<n ; j++){
            scanf("%d", &first[i][j]);
        }
    }
    
    printf("Enter the dimensions of second matrix");
    scanf("%d %d", &p, &q);

    if(n==p){
    printf("Enter the elements of second matrix: ");
    for(int i=0; i<p  ; i++){
        for(int j=0; j<q ; j++){
            scanf("%d", &second[i][j]);
        }
    }
        for(int i=0; i<m ; i++){
            for(int j=0; j<q ; j++){
                for(int k=0 ; k<p ; k++){
                    sum = sum + first[i][k]*second[k][j];
                }
                multi[i][j] = sum;
                sum= 0;

            }
        }
    printf("Multiplied matrix: \n");
    for(int i=0; i<m ; i++){
        for(int j=0 ; j<q ; j++){
            printf("%d \t", multi[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("Matrices can't be multiplied! ");
    }
    
    return 0;
}