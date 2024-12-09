#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    printf("memory allocation in bytes of int: %d\n", sizeof(int));
    printf("memory allocation in bytes of float: %d\n", sizeof(float));
    printf("memory allocation in bytes of char: %d\n", sizeof(char));
    printf("memory allocation in bytes of int: %d\n", sizeof(a));
    printf("memory allocation in bytes of float: %d\n", sizeof(b));
    printf("memory allocation in bytes of char: %d\n", sizeof(c));
    return 0;
}