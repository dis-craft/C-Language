#include <stdio.h>

struct pointer{
    int a;
    char b;
    float c;
};

int main() {
    struct pointer p;
    p.a = 2;
    printf("%d", *&p.a);
    return 0;
}