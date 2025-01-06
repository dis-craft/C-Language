#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int randomNum = (rand() % 100) + 1, guess, i=0;
    while (guess != randomNum){
    printf("Guess the random number!\n");
    scanf("%d", &guess);
    if(guess>randomNum)
        printf("Lower!\n");
    else
        printf("Higher!\n");    
    i++;
    }
    printf("You got it! And you took %d guesses!", i);
    return 0;
}
