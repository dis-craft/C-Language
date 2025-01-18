#include <stdio.h>

int main() {
    char str[] = {'S','R','I'};
    char str2[] = {'K','A','R'};
    char strs[] = "Srikar!";
    printf("%c %c\n", str[0], str2[1]);
    for(int i = 0; i<7; i++){
    printf("%c", strs[i]);
    }
    return 0;
}