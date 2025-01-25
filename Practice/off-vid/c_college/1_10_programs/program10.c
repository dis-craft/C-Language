/* Develop a program using pointers to compute the sum, mean and 
standard deviation of all elements stored in an array of N elements */

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float arr[20], sum, mean, variance, deviation;

    printf("Enter the value of n \n");
    scanf("%d", &n);

    printf("Enter %d real values \n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", (arr + i));  
    }

    sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + *(arr + i); 
    }
    printf("sum = %f\n", sum);  

    mean = sum / n;

    sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + (*(arr+i)-mean)*(*(arr+i)-mean);
    }

    variance = sum / n;
    deviation = sqrt(variance);

    printf("mean (Average) = %f\n", mean);
    printf("variance = %f\n", variance);
    printf("standard deviation = %f\n", deviation);

    return 0;
}
