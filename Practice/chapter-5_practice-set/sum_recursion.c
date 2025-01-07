#include <stdio.h>
// sum to n numbers
int sum(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else
        return n + sum(n-1);
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}