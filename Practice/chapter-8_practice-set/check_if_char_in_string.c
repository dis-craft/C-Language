#include <stdio.h>
#include <string.h>

int main() {
    char string[10], c;
    int count;
    gets(string);
    scanf("%c", &c);
    for(int i=0; i<strlen(string); i++){
        if(string[i]==c){
            count = 1;
        } 
    }
    if (count==1)
    {
        printf("The entered character exists in the string!");
    }
    else{
        printf("The entered character does not exist in the string!");
    }
    return 0;
}