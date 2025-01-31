#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("file2.txt", "r");
    int num1, num2, num3;
    fscanf(fptr , "%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);
    return 0;
}
/*

"r" -> open for reading
"w" -> open for writing // If the file exists, the contents will be overwritten
"a" -> open for append // If the file does not exist, it will be create 

"rb" -> open for reading in binary
"wb" -> open for writing in binary

*/