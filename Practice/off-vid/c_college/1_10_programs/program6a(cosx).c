/*Compute cos(x) using taylor's series approximation. Compare your result with
the built-in library function. Print both the results with appropriate inferences
Sine function using taylor series*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j,x1;
    float x, sign, cosx, fact;

    printf("Enter the number of terms in a series: ");
    scanf("%d", &n);

    printf("Enter the value of x (in degrees): ");
    scanf("%f", &x);
    x1=x;
    x = x * 3.142 / 180.0;
    cosx = 1;
    sign = -1;

    for (i = 2; i <= n; i = i + 2)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        cosx = cosx + (pow(x, i) / fact) * sign;
        sign = sign*(-1);
    }

    printf("Sum of the cosine series = %f\n", cosx);
    printf("The value of cos(%d) using library function = %f\n", x1, cos(x));

    return 0;
}

// Output:
// Enter the number of terms in a series: 3
// Enter the value of x (in degrees): 45
// Sum of the cosine series = 0.691495
// The value of cos(45) using library function = 0.707035