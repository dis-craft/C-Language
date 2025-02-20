//balance chem equation:

#include <stdio.h>

int gcd(int x, int y){
    int hcf;
    for(int i=1 ; i<=x && i<=y ; i++){
        if(x%i==0 && y%i==0){
            hcf = i;
        }
    }
    return hcf;
}

int balance(int x,int y,int p,int q){
    int b1,b2,b3,temp;
    if(p%x==0 && q%y==0){
        b1 = p/x;
        b2 = q/y;
        b3=1;
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
    printf("%d %d %d", b1, b2, b3);
}

int main() {
    int x,y,p,q;
    printf("enter the values of x,y,p,q");
    scanf("%d %d %d %d", &x,&y,&p,&q);
    balance(x,y,p,q);
    return 0;
}