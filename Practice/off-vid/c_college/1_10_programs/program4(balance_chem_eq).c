/*Program to balance the given chemical equation values x,y,p,q  of a simple
chemical equation of the type: The task is to find the values of constants b1,b2,b3
such that the equation is balanced on both side and it must be the reduced form.*/

#include <stdio.h>

int gcd(int a, int b){
    int hcf;
    for(int i = 1; i<=a&&i<=b ; i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    return hcf;
}

int balance(int x, int y, int p, int q){
    int b1,b2,b3,temp;
    if(p%x==0 && q%y == 0){
        b1 = p/x;
        b2 = q/y;
        b3 = 1;
    }
    else{
        p = p*y;
        q = q*x;
        b3 = x*y;
        temp = gcd(p, gcd(q,b3));
        b1 = p/temp;
        b2 = q/temp;
        b3 = b3/temp;
    }
    printf("The coefficients are b1 = %d, b2 = %d, b3 = %d", b1,b2,b3);
}

int main() {
    int k,l,m,n;
    printf("Enter the atomic nature of reactants x and y");
    scanf("%d %d", &k, &l);
    printf("Enter the atomic nature of products p and q");
    scanf("%d %d", &m, &n);
    balance(k,l,m,n);
    return 0;
}