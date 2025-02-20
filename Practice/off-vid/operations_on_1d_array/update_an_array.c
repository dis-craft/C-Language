// Element Modification  - Update array value. 
//          Array: 1 2 3 4 5 6
//at pos=3, put 8:       ^
//                 1 2 3 8 5 6
#include <stdio.h>

int main() {
    int arr[10];
    int n;
    int pos;
    int val;
    printf("Enter the number of elements in the array: (<10)");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of element that you want update of:");
    scanf("%d", &pos);

    printf("What do you want to update the array at %d by: ", pos);
    scanf("%d", &val);

    printf("Array before updating: \n");

    for(int i=0; i<n ; i++){
        printf("%d \t", arr[i]);
    }

    for(int i=0; i<n ; i++){
        if(i==pos){
            arr[i] = val; 
        }
    }
    
    printf("\nUpdated array = \n");
    for(int i=0; i<n ; i++){
        printf("%d \t", arr[i]);
    }

    return 0;
}
