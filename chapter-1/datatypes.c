#include<stdio.h>
int main(){
    int a=1; //memory allocation 4bytes or 32bits
    float b=1.4; //memory allocation 1byte or 8bits
    char c='A'; //memory allocation 4bytes or 32bits
    // not allowed char c="A"; only single quotes
    printf("%c", c);
    return 0;
}
