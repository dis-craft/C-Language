#include <stdio.h>

int main() {
    char a = 'A';
    printf("%c", *&a);
    return 0;
}
