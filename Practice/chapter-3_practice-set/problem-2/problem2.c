#include <stdio.h>

int main() {
    int p;
    int m1,m2,m3;
    printf("Enter the marks of subject1 \n");
    scanf("%d", &m1);
    printf("Enter the marks of subject2 \n");
    scanf("%d", &m2);
    printf("Enter the marks of subject3 \n");
    scanf("%d", &m3);
    p = (m1+m2+m3)/3;
    printf("The percentage is %d\n", p);
    if(m1<33 || m2<33 || m3<33){
        printf("Fail due to less marks in one of the subjects\n");
    }
    else if(p<40){
        printf("FAIL DUE TO OVERALL PERCENTAGE < 40");
    }        
    else{
        printf("PASS");
    }
    return 0;
}