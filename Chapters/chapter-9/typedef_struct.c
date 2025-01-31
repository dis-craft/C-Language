#include <stdio.h>

typedef struct pointer{
    int a;
    char b;
    float c;
} test;

int main() {
    test s;
    s.a = 1;
    printf("%d", s.a);
    return 0;
}