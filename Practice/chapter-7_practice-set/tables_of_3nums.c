#include <stdio.h>

int main() {
    int n;

    // Ask the user how many tables they want
    printf("How many tables do you want to print? ");
    scanf("%d", &n);

    int tableNumbers[n]; // Array to store the table numbers

    // Input the specific table numbers
    printf("Enter the numbers for which you want the tables:\n");
    for (int i = 0; i < n; i++) {
        printf("Table %d: ", i + 1);
        scanf("%d", &tableNumbers[i]);
    }

    // Print the tables
    for (int i = 0; i < n; i++) {
        printf("\nMultiplication table of %d:\n", tableNumbers[i]);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", tableNumbers[i], j, tableNumbers[i] * j);
        }
    }

    return 0;
}
