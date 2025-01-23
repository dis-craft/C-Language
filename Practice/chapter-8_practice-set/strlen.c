#include<stdio.h>
int main(){
    char string[]="hello";
    int i,j=0;
    for(i=0; string[i]!='\0' ; i++){
        j++;
    }
    printf("%d", j);
    return 0;
}