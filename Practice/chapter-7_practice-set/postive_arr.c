/* Write a program containing functions which counts the number of positive 
integers in an array. */
#include <stdio.h>

int positive_counter(int arr[]){
    int num=0;
    for(int i=0 ; i<10 ; i++){
        if(arr[i]>0){
            num++;
            printf("%d is positive number!\n", arr[i]);
        }
    }
    printf("The number of positive integers in the array: %d \n", num);
}

int main() {
    int arr[10] = {2,3,1,1,1,-2,-3,2,5,-3};
    positive_counter(arr);
    return 0;
}