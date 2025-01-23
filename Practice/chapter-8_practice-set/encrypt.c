#include<stdio.h>
#include<string.h>

int main(){
    char a[10];
    int arr[10];
    printf("Enter the encrypted string!\n");
    gets(a);
    // puts(a);
    for(int i = 0; i<strlen(a); i++){
        arr[i] = (int)a[i]-1;
        printf("%c", arr[i]);
    }
    return 0;
}