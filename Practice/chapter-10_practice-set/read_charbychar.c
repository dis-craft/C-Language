// Write a program to read a text file character by character and write its content 
// twice in separate file.


#include <stdio.h>
#include <string.h>
int main() {
    FILE *ptr;
    ptr = fopen("file_cbyc.txt", "r");
    
    char arr[30];

    char ch;
    ch  = fgetc(ptr);
    printf("%c", ch);

    

    for(int i=0; ch != EOF ; i++){
        arr[i] = fgetc(ptr);
    }

    for(int i=0; i< strlen(arr) ; i++){
       printf("%c\n", arr[i]);   
    }

    return 0;
}