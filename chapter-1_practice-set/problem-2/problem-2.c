/*
Calculate the area of circle and cylinder
*/
#include<stdio.h>
int main(){
    float radius, area_c, h, area_cyl;
    printf("Enter the value of height");
    scanf("%f", h);
    printf("Enter the value of radius");
    scanf("%f", radius);
    area_cyl=area_c*h;
    area_c=3.14*radius*radius;
    printf("The area of the circle is : %f", area_c);
    printf("The area of the cylinder is : %f", area_cyl);
    return 0;
}