#include <stdio.h>

typedef struct my_struct{
    int ID;
    float salary;
}emp;

int main() {
    emp mys;
    emp mys2;
    emp mys3;
    mys.salary = 3000.00;
    mys.ID = 123;
    
    mys2.ID = 341;
    mys2.salary = 3001.00;
    mys3.salary = 3003.00;
    printf("\n %d \n %f", mys.ID, mys.salary);
    printf("\n %d \n %f", mys2.ID, mys2.salary);
    return 0;
    scanf("%d", &mys3.ID);
}