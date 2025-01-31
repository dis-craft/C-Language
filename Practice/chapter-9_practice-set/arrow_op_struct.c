#include <stdio.h>

struct new{
    int a;
    char b;
};

int main() {
    struct new n;
    struct new *ptr;
    ptr = &n;
    n.a = 2;
    n.b = 'b';

    printf("%d %c This is printed using *ptr  \n", (*ptr).a, (*ptr).b);
    printf("%d %c This is printed using ptr-> \n", ptr->a, ptr->b);
    printf("%p %p\n", &ptr->a, &ptr->b);

    
    return 0;
}