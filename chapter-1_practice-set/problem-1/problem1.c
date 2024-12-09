/*
write a c program to calculate area of a rectangle
a. taking inputs from user.
*/

#include<stdio.h>
int main(){
    float a,b;
    float area;
    printf("Enter the value of a(length of the triangle): ");
    scanf("%f", &a);
    printf("Enter the value of b(length of the triangle): ");
    scanf("%f", &b);
    area=a*b;
    printf("The area of the rectangle with the sides %f and %f is: %f", a,b,area);
    return 0;
}
  