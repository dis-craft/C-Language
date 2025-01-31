#include <stdio.h>

typedef struct sum_vectr{
    int i;
    int j;
}vector;
 

vector sum(struct sum_vectr v1, struct sum_vectr v2){
    vector v3 = {v1.i + v2.i, v1.j + v2.j};      
    return v3;
}

int main() {
    // vector v1;
    // vector v2;
    // vector v3;
    vector v1 = {2,3};
    vector v2 = {3,4};
    vector v3 = sum(v1,v2);
    printf("vector sum = %di + %dj", v3.i, v3.j);

    return 0;
}