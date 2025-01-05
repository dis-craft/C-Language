#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNum = (rand() % 100) + 1;

    // Print the random number
    printf("Random number between 1 and 100: %d\n", randomNum);

    return 0;
}
