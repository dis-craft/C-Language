/*C program to find mechanical energy of a particle using 
E = mgh + 1/2(mv^2)*/

#include <stdio.h>
int main()
{
    float m, h, v, p, k, e;

    printf("Enter Mass of the body\n");
    scanf("%f", &m);

    printf("Enter displacement of the body\n");
    scanf("%f", &h);

    printf("Enter velocity of the body\n");
    scanf("%f", &v);

    p = m * 9.8 * h;  // To calculate Potential energy
    k = 0.5 * m * v * v; // To calculate Kinetic energy
    e = p + k;

    printf("Potential energy of the body = %f\n", p);
    printf("Kinetic energy of the body = %f\n", k);
    printf("Mechanical energy of a body = %f\n", e);

    return 0;
}