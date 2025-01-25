/*C program to convert kilometer into meter, centimeter and milimeter*/

#include <stdio.h>

int main() {
    float km, m, cm, mm;

    printf("Enter the distance in Kilometer: ");
    scanf("%f", &km);

    m = km * 1000.0;
    cm = km * 100000.0;
    mm = km * 1000000.0;

    printf("Distance in meter is %.6f\n", m);
    printf("Distance in centimeter is %.6f\n", cm);
    printf("Distance in millimeter is %.6f\n", mm);

    return 0;
}