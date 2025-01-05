// Write a C program to input a student's marks in four subjects, calculate the total, aggregate, and display the grade obtained.
#include <stdio.h>

int main() {
    float marks[4], total = 0, aggregate;
    char grade;
    int i;


    printf("Enter marks for 4 subjects (out of 100):\n");
    for (i = 0; i < 4; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total = total + marks[i];
    }

    aggregate = total / 4;

    if (aggregate >= 85) {
        grade = 'A';
    } else if (aggregate >= 70) {
        grade = 'B';
    } else if (aggregate >= 50) {
        grade = 'C';
    } else if (aggregate >= 35) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("\nResults:\n");
    printf("Total Marks: %.2f/400\n", total);
    printf("Aggregate: %.2f%%\n", aggregate);
    printf("Grade: %c\n", grade);

    return 0;
}
