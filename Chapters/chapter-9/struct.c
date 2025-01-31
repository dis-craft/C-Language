#include <stdio.h>
#include <string.h>

struct employee{
    int ID;
    char name[20];
    double salary;
};

int main() {
    // char realname = "srikar";
    struct employee e1;
    e1.ID = 123;
    // *e1.name = "srikar";
    strcpy( e1.name , "srikar");
    e1.salary  = 20000000.00;
    printf("%d %f %s", e1.ID, e1.salary, e1.name);
    return 0;
}