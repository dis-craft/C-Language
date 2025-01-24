#include<stdio.h>
#include<string.h>
int main(){
    char string[30];
    char check;
    int j=0;
    gets(string);
    printf("Enter a character u want to check for!");
    scanf("%c", &check);
    for(int i=0; i<strlen(string); i++){
        if(check==string[i]){
            j++;
        }
    }
    printf("Character check occurs %d times \n",j);
    return 0;
}