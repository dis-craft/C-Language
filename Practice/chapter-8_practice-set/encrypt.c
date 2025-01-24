#include <stdio.h>
#include <string.h>
int main() {
    char a[10];
    char b[10];
    gets(a);
    for(int i=0; i<strlen(a) ; i++){
        printf("%c \t", a[i]);}
        printf("\n");
    for(int i=0; i<strlen(a) ; i++){
        // b[i] = a[i]+1;
        printf("%d \t", a[i]+1);}
        printf("\n");
    for(int i=0; i<strlen(a) ; i++){
        printf("%c \t", a[i]+1);
    }
    // printf("%c", 97);
    return 0;
}
// ejtdsbgu