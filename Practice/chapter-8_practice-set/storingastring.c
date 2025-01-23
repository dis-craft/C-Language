#include <stdio.h>

int main() {
    char string[10];
    printf("Enter a string!: \n");
    scanf("%s", string);
    printf("%s \n", string); // using %s

    char string_using_c[10];
    printf("Enter a string this time its stored using a ");
    for(int i=0; i<9 ; i++){
        scanf("%c", string_using_c[i]);
    }
    for(int i=0; i<9 ; i++){
        printf("%c", string_using_c[i]);
    }
    return 0;
}