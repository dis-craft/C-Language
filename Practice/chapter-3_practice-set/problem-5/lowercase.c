#include <stdio.h>


void read(char *c) {
    scanf("%c", c);  // Use pointer directly
}

int main() {
    char c;
    printf("Enter a character: ");
    read(&c);  // Pass the address of c to the function

    if (c>='a'&& c<='z') {
        printf("The character '%c' is lowercase.\n", c);
    } else {
        printf("The character '%c' is NOT lowercase.\n", c);
    }

    return 0;
}
