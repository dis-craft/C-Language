#include <stdio.h>

void calculateSum(int x, int y) {
  int sum = x + y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
}

int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    calculateSum(a, b);
    calculateSum(5, 3);
    calculateSum(8, 2);
    calculateSum(15, 15);
  return 0;
}