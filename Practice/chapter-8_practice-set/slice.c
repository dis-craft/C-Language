// t h i s i s a v e r y l o n g s t r i n g 
// 0 1 2 3 4 5 6 7 8 9

#include <stdio.h>
int main() {
    int m=2,n=8;
    char string[] = "12345678910";
    for(int i=m-1; i<n ; i++){
        printf("%c", string[i]);
    }
    return 0;
}