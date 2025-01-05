#include <stdio.h>
void print_array(int arr[]){ 
    for(int i; i<5; i++){ //using for loop to display the array with var i
    printf("%d", arr[i]); //passing i in arr
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    print_array(arr); //passing an array to a function
    return 0;
}