#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("data.txt", "w");
    
    char name[20];
    float salary;
    char name2[20];
    float salary2;
    printf("Enter name and salary!\n");
    scanf("%s %f", name, &salary);
    printf("Enter name2 and salary2!\n");
    scanf("%s %f", name2, &salary2);

    fprintf(ptr, "%s, %f \n", name, salary);
    fprintf(ptr, "%s, %f \n", name2, salary2);

    return 0;
}