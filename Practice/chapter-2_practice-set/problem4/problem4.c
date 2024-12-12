#include <stdio.h>

int main() {
        int x=1,y=2,z=3,k=4;
        //explain step by step evaluation of 3*x/y - z + k
        //3*1/2 - 3 + 4
        //3/2 - 3 + 4
        //1.5(int) - 3 + 4
        // 1 -3 + 4
        //-2+4
        //2
        printf("%d", 3*x/y-z+k); //2

    return 0;
}