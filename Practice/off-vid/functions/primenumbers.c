#include <stdio.h>

int main() {
    int i, j, max_range, prime_count = 0;

    printf("Enter the max range!\n");
    scanf("%d", &max_range);

    for (j = 2; j <= max_range; j++) { // Iterate through each number in the range
        int is_prime = 1; // Assume the number is prime
        for (i = 2; i < j; i++) { // Check divisors from 2 to j-1
            if (j % i == 0) {
                is_prime = 0; // Not a prime number
                break;
            }
        }
        if (is_prime) {
            prime_count++; // Increment prime count
            printf("%d\n", j);
        }
    }

    printf("The number of prime numbers from 2 to %d is: %d\n", max_range, prime_count);

    return 0;
}
