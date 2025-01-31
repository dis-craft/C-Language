#include <stdio.h>

typedef struct vector_struct
{
    int i;
    int j;
}vs;


int main() {
    vs v;
    v.i = 3;
    v.j = 4;
    printf("Vector r = %di + %dj", v.i, v.j);
    return 0;
}