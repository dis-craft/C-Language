#include <stdio.h>

struct employer{
    char name[20];
    int salary;
    int ID;
};

int main() {
    struct employer e[3];
    for(int i=0; i<3; i++){
        printf("Enter the details of employee no %d:", i);
        scanf("%s", e[i].name);
        scanf("%d", &e[i].salary);
        scanf("%d", &e[i].ID);
    }
    
    for(int i=0; i<3; i++){
        printf("%s\n", e[i].name);
        printf("%d\n", e[i].salary);
        printf("%d\n", e[i].ID);
    }
    
    return 0;
}