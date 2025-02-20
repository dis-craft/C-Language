#include <stdio.h>

int main() {
    char c='b';
    printf("Enter a character: \n");
    if(c>='a' && c<='z'){
        printf("Lowercase!");
    }
    else if(c>='A' && c<='Z'){
        printf("Uppercase!");
    }
    else{
        printf("It is a number!");
    }
    return 0;
}