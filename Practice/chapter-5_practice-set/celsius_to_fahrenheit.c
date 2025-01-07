#include <stdio.h>

int temp_converter(int a){
    float F;
    F=(a*(9.0/5.0))+32;
    printf("Temperature in fahrenheit is %.3f\n", F);    
    
    return 0;
}


int main() {
    int celsius;

    scanf("%d", &celsius);
    temp_converter(celsius);
    return 0;
}