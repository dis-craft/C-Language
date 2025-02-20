#include <stdio.h>

int main() {
    int m, n, i, c, arr[10];
    printf("Enter the value of m\n");
    scanf("%d", &m);

    printf("Enter the value of arr\n");
    for(c = 0; c < m; c++) {
        scanf("%d", &arr[c]);
    }

    // Bubble Sort
    for(i = 0; i < m - 1; i++) {
        for(c = 0; c < m - i - 1; c++) {
            if(arr[c] > arr[c + 1]) {
                // Swap the elements
                int temp = arr[c];
                arr[c] = arr[c + 1];
                arr[c + 1] = temp;
            }
        }
    }

    printf("The sorted elements are: \n");

    for(c = 0; c < m; c++) {
        printf("\t %d", arr[c]);
    }

    return 0;
}
