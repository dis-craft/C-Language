//Question: Write a C program to print numbers from m to n (where n > m).

#include <stdio.h>

int main() {
    int m,n;
    printf("Enter the value of m,n\n");
    scanf("%d %d", &m, &n);
    printf("The numbers from %d to %d: \n", m, n);
    for(int i=m-1; i<=n; i++){
        printf("%d\n", i);
    }    
    return 0;
}

/*

Output: 

Enter the value of m,n
10
20

The numbers from 10 to 20: 
10
11
12
13
14
15
16
17
18
19
20

*/
