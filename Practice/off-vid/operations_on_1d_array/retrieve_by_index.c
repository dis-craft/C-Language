// Element Access  - Retrieve specific element.
// Given = Array of n elements, having indexs, return the element at given index.

// POS: 0 1 2 3 4 
// ELE: 4 5 6 1 8 
#include <stdio.h>

int main() {
    int arr[10];
    int n;
    int pos;
    printf("Enter the number of elements in the array: (<10)");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of arr that you want the element of:");
    scanf("%d", &pos);

    printf("The element at position %d in the array is: %d\n", pos, arr[pos]);
    for(int i=0; i<n ; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
    for(int j=0 ; j<n ; j++){
        if(j == pos)
            printf("^\t");
        else
            printf("-\t");
    }
    return 0;
}