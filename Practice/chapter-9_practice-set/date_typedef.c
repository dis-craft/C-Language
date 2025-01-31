// Write a structure capable of storing date. Write a function to compare those 
// dates.

#include <stdio.h>

typedef struct date{
    int date;
    int month;
    int year;
}dates;

void compare(dates d1, dates d2){
    if(d1.date == d2.date && d1.month == d2.month && d1.year == d2.year)
        printf("The dates are equal!");
    else
        printf("The dates are not equal!");
}

int main() {
    dates D;
    dates D2;
    D.date = 31;
    D.month = 1;
    D.year = 2025;
    D2.date =  25;
    D2.month = 11;
    D2.year =  2025;
    printf("Date: %d/%d/%d", D.date, D.month, D.year);
    printf("Date: %d/%d/%d", D2.date, D2.month, D2.year);
    compare(D, D2);
    return 0;
}