#include <stdio.h>

int main() {
    int n, arr[10], pos, ele;

    printf("Enter the number of elements in the array (<10): ");
    scanf("%d", &n);

    // Input validation
    if (n >= 10) {
        printf("Array can have a maximum of 10 elements.\n");
        return 1;
    }

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index where you want to insert the element (0 to %d): ", n);
    scanf("%d", &pos);

    // Check for valid index
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element that you want to insert at index %d: ", pos);
    scanf("%d", &ele);

    printf("The array before insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    // Shifting elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = ele;  // Inserting the new element

    printf("\nThe array after insertion of %d at index %d is:\n", ele, pos);
    for (int i = 0; i <= n; i++) {  // Loop runs till n (inclusive)
        printf("%d\t", arr[i]);
    }

    printf("\n");
    for (int j = 0; j <= n; j++) {  // Pointer line below the inserted element
        if (j == pos)
            printf("^\t");
        else
            printf("-\t");
    }

    return 0;
}
