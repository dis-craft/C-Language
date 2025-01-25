/*Implement structures to read, write and compute average-marks and the
students scoring above and below the average marks for a class of N students*/

#include<stdio.h>

struct student{
    char USN[10], name[10];
    float marks1, marks2, marks3;
    float avg, total;
};

void main(){
    int n;
    struct student s[10];
    float avg, total;
    printf("Enter the number of students:\n");
    scanf("%d", &n);

    for(int i=0; i<n ; i++){
        printf("Enter the details of student %d: \n", i+1);
        printf("Enter the USN of student %d: \n", i+1);
        scanf("%s", s[i].USN);
        printf("Enter the name of student %d: \n", i+1);
        scanf("%s", s[i].name);
        printf("Enter the marks of subject 1,2,3 student %d: \n", i);
        scanf("%f %f %f", &s[i].marks1, &s[i].marks2, &s[i].marks3);
        s[i].total = s[i].marks2 + s[i].marks1 + s[i].marks3;
        s[i].avg = s[i].total/3.0;
    }

    for(int i=0 ; i<n ; i++){
        if(s[i].avg>=35){
            printf("%s has scored above 35!", s[i].name);
        }
        else{
            printf("%s has not scored above 35!", s[i].name);
        }
    }
}