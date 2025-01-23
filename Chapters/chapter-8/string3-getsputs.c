#include <stdio.h>

int main(){
    char string[10];
    //gets()
    //puts()
    printf("Enter a sentence!\n");
    gets(string);
    printf("this is printed using the printf statement! %s\n", string);
    puts(string); //this also adds \n in the end.
    return 0;
}