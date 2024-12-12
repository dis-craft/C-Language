#include <stdio.h>

int main() {
    //write a program to check whether a nnumber is divisible by 97 or not    
    int n,a;
    printf("Enter a number!\n");
    scanf("%d", &n);
    a=n%(97);
    printf("%d\n", a);
    if(a==0){
        printf("The number %d is divisible by 97.", n);
    }
    else{
        printf("The number %d is not divisible by 97.", n);
    }
    return 0;
}