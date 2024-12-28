#include <stdio.h>

int main() {
    //short hand if else:
    // condition ? expression-if-true : expression-if-false
    int a,b;
    printf("Enter the value of a, b \n");
    scanf("%d %d", &a, &b);
    (a>b) ? printf("a > b") : printf("a < b"); 
    return 0;
}