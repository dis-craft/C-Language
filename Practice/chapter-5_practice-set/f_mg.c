#include <stdio.h>


float calcu(int m){
    float force;
    force = m * 9.8;
    return force;
}
int main() {
    int m;
    scanf("%d", &m);
    printf("%.2f", calcu(m));
    return 0;
}