#include <stdio.h>


void average(int a, int b, int c){
    float avg = (a+b+c)/3.0;
    printf("%.2f", avg);
}


int main() {
    int a,b,c;
    printf("Enter 3 numbers!\n");
    scanf("%d%d%d", &a,&b,&c);
    average(a,b,c);    
    return 0;
}