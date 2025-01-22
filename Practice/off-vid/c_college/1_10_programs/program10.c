/* Develop a program using pointers to compute the sum, mean and 
standard deviation of all elements stored in an array of N elements */

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float arr[20], sum, mean, variance, deviation;

    // Prompt the user to enter the number of elements
    printf("Enter the value of n \n");
    scanf("%d", &n);

    // Input array elements using pointer notation
    printf("Enter %d real values \n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", (arr + i));  // (arr + i) is the pointer to the ith element of the array
    }

    // Initialize sum to zero for summing elements
    sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + *(arr + i);  // *(arr + i) dereferences the pointer to access the value
    }
    printf("sum = %f\n", sum);  // Output the sum of the array elements

    // Compute the mean (average) of the array elements
    mean = sum / n;

    // Reset sum to zero for variance calculation
    sum = 0;
    for (i = 0; i < n; i++) {
        // Variance calculation using (arr + i) to access elements and mean for the difference
        sum = sum + (*(arr + i) - mean) * (*(arr + i) - mean);
    }

    // Compute variance and standard deviation
    variance = sum / n;
    deviation = sqrt(variance);

    // Display the results
    printf("mean (Average) = %f\n", mean);
    printf("variance = %f\n", variance);
    printf("standard deviation = %f\n", deviation);

    return 0;
}
