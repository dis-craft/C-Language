#include <stdio.h>

int main() {
    int a=0;
    a+=1; // is same as a = a+1;
    a*=2; // is same as a = a*2;
    a-=1; // is same as a = a-1;
    a/=1; // is same as a = a/1;
    a%=1; // is same as a = a%1;    
    printf("%d\n", a);
    return 0;
}