#include <stdio.h>

struct mystruct{
    int a;
    int b;
    char name[10];
};

int main() {
    struct mystruct mys; //need not be a single word
    mys.a = 5;
    mys.b = 6;
    printf("%d", mys.a + mys.b);
    return 0;
}