#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int randomNum = (rand() % 100) + 1, guess, i;
    printf("guess!\n");
    for(i=0; guess!=randomNum ; i++){
        
        scanf("%d", &guess);

        if (guess>randomNum)
            printf("Lower!\n");
        else if(guess<randomNum)
            printf("Higher!\n");
    }
    printf("U got it in %d guesses", i);
    return 0;
}