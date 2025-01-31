#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("file.txt", "w");
    for(int i=1; i<11 ; i++){
    fprintf(fptr, "%d X %d = %d\n", 2, i, i*2);
    }
    return 0;
}