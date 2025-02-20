#include <stdio.h>

int main() {
    int c,d,m,n,p,q,first[10][10], second[10][10], multi[10][10], sum=0;
    printf("Enter the dimensions of first matrix: \n");
    scanf("%d %d", &m, &n);
    printf("Enter the dimensions of second matrix: \n");
    scanf("%d %d", &p, &q);
    if(n==p){
        printf("Enter the elements of first matrix \n");
        for( c=0; c<m; c++){
            for(d=0 ; d<n ; d++){
                scanf("%d", &first[c][d]);
            }
        }
        printf("Enter the elements of second matrix \n");
        for( c=0; c<p; c++){
            for(d=0 ; d<q ; d++){
                scanf("%d", &second[c][d]);
            }
        }
        for(c=0; c<m ; c++){
            for(d=0; d<q ; d++){
                for(int k=0 ; k<p ; k++){
                    sum += first[c][k]*second[k][d];
                }
                multi[c][d] = sum;
                sum = 0;
            }
        }
        printf("The multiplied matrix is: \n");
        for(c=0; c<m ; c++){
            for(d=0;d<q ; d++){
                printf("%d \t", multi[c][d]);
            }
        printf("\n");
        }
    }
    else{
        printf("Matrix multiplication cant be done! \n");
    }
    return 0;
}