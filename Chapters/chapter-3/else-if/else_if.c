#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    if (age > 18 && age < 60) {
        printf("you can drive");
    }
    else if (age == 18) {
        printf("Congrats you are eighteen now, you can apply for DL");    
    }
    else{
        printf("you cannot drive");
    }

}