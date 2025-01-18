#include <stdio.h>
#include <math.h>

int main() {
    int n, target;

    // Input: Size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input: Elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: Target sum
    printf("Enter the target sum: ");
    scanf("%d", &target);

    int total_combinations = pow(2, n); // 2^n subsets
    int found = 0; // To track if any combination matches

    // Loop through all subsets
    for (int mask = 0; mask < total_combinations; mask++) {
        int sum = 0;

        // Calculate sum of the current subset
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += arr[i];
            }
        }

        // If sum matches the target, print the subset
        if (sum == target) {
            found = 1;
            printf("Subset matching target: { ");
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    printf("%d ", arr[i]);
                }
            }
            printf("}\n");
        }
    }

    if (!found) {
        printf("No subset matches the target sum.\n");
    }

    return 0;
}
