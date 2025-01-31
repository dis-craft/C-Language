/*

0 - Rock
1 - Paper
2 - Scissor

output so that the bot always wins:
I O
0 0
1 2
2 0

*/
#include <stdio.h>

int main() {
    int input;
    int win;
    int choice;
    
    do
    {
    printf("Enter 0,1,2 - Rock, paper, scissors \n");
    scanf("%d", &input);
        
    if(input == 0){
        printf("0-ROCK\n");
        win = 0;
    }
    else if(input == 1){
        printf("2-SCISSORS\n");
        win=1;
    }
    else if(input == 2){
        printf("0-ROCK\n");
        win=1;
    }
    if(win == 1){
        printf("I win!\n");
    }
    else if(win == 0){
        printf("Its a draw!\n");
    }
    else
        printf("You won!!");
    
    printf("Do you want to continue? 1/0");
    scanf("%d", &choice);
    } while (choice == 1);


    return 0;
}