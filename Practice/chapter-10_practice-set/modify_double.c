#include <stdio.h>

int main() {
    int num;
    int num2;
    
    FILE *ptr2;
    ptr2 = fopen("modifyfy.txt", "r");
    fscanf(ptr2 , "%d", &num);
    printf("%d", num);
    
    fclose(ptr2);

    FILE *ptr;
    ptr = fopen("modifyfy.txt", "w");
    fprintf(ptr, "%d", num*2);
    
    return 0;
}