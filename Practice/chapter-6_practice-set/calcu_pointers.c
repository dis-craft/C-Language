#include <stdio.h>


int sum(int* a, int* b){
    int sum;
    sum = *a + *b;
    // float avg = sum/2.0;
    return sum;
}


float avg(int* a, int* b){
    float avg;
    avg = (*a + *b)/2.0;
    // float avg = sum;
    return avg;
}


int main() {
    int a= 10, b =20;
    // sum_avg(&a, &b);
    printf("sum %d\n", sum(&a, &b));
    printf("average %f\n", avg(&a, &b));
    return 0;
}