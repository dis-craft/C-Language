#include <stdio.h>

int main() {
    int n;
    float m = 32.34;
    n = (int)m; //typcasting: forcefully converting float to int
                //typeconversion: automatic conversion from one data type to another
    printf("%d", n);
        
    int a = 5;
    float b = 2.5;
    float result;

    // Type conversion: automatic conversion from int to float
    result = a + b;  // 'a' is automatically converted to float
    printf("Result of automatic type conversion: %f\n", result);

    // Typecasting: explicit conversion from float to int
    int c = (int)b;  // 'b' is explicitly cast to an int
    printf("Result of typecasting: %d\n", c);
    return 0;
}