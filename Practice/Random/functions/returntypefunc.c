#include <stdio.h>

int myfunc(int x){
    return 5 + x;
}

void vfunc(int x){
    int sum;
    sum = 5 + x;
    printf("the number is : %d\n", sum);
}
int main() {
    printf("the number is: %d\n", myfunc(4)); //using int return type for a function
    vfunc(5);//using void return type for a function
    return 0;
}