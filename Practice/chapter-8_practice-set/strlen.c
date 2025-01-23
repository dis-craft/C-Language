#include<stdio.h>
int strlenn(char a[]){
    int i,j=0;
    for(i=0; a[i]!='\0' ; i++){
        j++;
    }
    printf("%d", j);
}

int main(){
    char string[20];
    gets(string);
    strlenn(string);
    return 0;
}