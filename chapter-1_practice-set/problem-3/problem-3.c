#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the value of Celsius: ");
    scanf("%f", &c);
    f = (c*1.8)+32;
    printf("The value of c in fahrenheit is : %f",f);
    return 0;
}
  