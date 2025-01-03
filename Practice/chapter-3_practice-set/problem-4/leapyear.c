// c program to find whether entered year is leap year or not

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: \n");
    scanf("%d", &year);

    if ((year%4)==0 && year>2025){
        printf("%d is a leap year and is %d years away! \n",year, year - 2025);

    }
    else if ((year%4)==0 && year<2025){
        printf("%d is a leap year and was %d year(s) ago! \n",year, 2025 - year);
    }
    else{
        printf("%d is not a leap year.\n", year);
    //nearest leap year to entered year.
    if((year%4)==1){
        printf("The nearest leap year is: %d \n", year-1);
    }
    if((year%4)==2){
        printf("The nearest leap year is: %d and %d \n", year-2, year+2);
    }
    
    if((year%4)==3){
        printf("The nearest leap year is: %d \n", year+1);
    }
    }

    return 0;
}