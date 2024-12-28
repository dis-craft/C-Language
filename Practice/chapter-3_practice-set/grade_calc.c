#include <stdio.h>

void calcu() {
    int m;
    printf("Enter Your marks:\n");
    scanf("%d", &m);

    if(m>=90 && m<100) {
        printf("Grade - A");
    }
    else if(m>=75 && m <90) {
        printf("Grade - B");
    }
    else if(m>=50 && m <75) {
        printf("Grade - c");
    }
    else if(m>=33 && m <50) {
        printf("Grade - D");
    }
    else{
        printf("Grade - F");
    }
}

int main() {
    calcu();
    int n;
    printf("\n\nEnter 1 to continue and 0 to exit\n");
    scanf("%d", &n);
    if(n==1) {
        main();
    }
    else {
        return 0;
    }
}