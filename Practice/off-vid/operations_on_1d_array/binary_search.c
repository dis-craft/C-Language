#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid; // Found the target at index mid
        } 
        else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } 
        else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 14;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found.\n");
    }
    return 0;
}
