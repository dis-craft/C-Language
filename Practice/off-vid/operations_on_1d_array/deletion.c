// 10.  Deletion Operation  - Remove an element.  

#include <stdio.h>

int main() {
    int arr[10];
    int n;
    int pos;
    int ele;

    printf("Enter the number of elements in the array: (<10)");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n Current array: \n");
    for(int i=0; i<n ; i++){
        printf("%d \t", arr[i]);
    }
    
    printf("\nEnter the pos of the element you want to delete : \n");
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 

    printf("The array after deletion: \n");
    for(int i=0; i<n ; i++){
        printf("%d \t", arr[i]);
    }
    return 0;
}