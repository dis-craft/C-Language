#include <stdio.h>

int main() {
    int i = 5;
    i = i + 5; // 5 + 5 = 10
    printf("The value of i is: %d\n", i);

    // i++; printf i first and then increments later stores in i (post increment operator)
    // ++i; increments i first later stores in i and then prints (pre increment operator)

    printf("The value of i is: %d\n", i++); // increments and stores in i but doesnt print
    printf("The value of i is: %d\n", i); // since already it is incremented it prints 11

    printf("The value of i is: %d\n", ++i); //increments and stores and prints i
    printf("The value of i is: %d\n", i); // rechecking if i value is updated
    return 0;
}