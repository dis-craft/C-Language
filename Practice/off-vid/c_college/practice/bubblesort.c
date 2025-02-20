#include <stdio.h>

int main() {
    int arr[10], n , swap;
    scanf("%d", &n);
    for(int i=0; i<n ; i++){
    scanf("%d", &arr[i]);
    }
    for(int c=0; c< n-1 ; c++){
        for(int d=0 ; d< n-c-1 ; d++){
            if(arr[d]>arr[d+1]){
                swap = arr[d];
                arr[d] = arr[d+1];
                arr[d+1] = swap;
            }
        }
    }
    for(int i=0; i<n ; i++){
        printf("%d \t", arr[i]);
    }
    return 0;
}