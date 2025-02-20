/*Compute sin(x) using taylor's series apprx. Compare your result with
the built-in library function. Print both the results with appropriate inferences
Sine function using taylor series*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, x1;
    float number, term, denominator, x, sinx;

    printf("Enter the number of terms in a series: ");
    scanf("%f", &number);

    printf("Enter the value of x (in degrees): ");
    scanf("%f", &x);
    x1 = x;
    x = x * (3.142 / 180.0);
    term = x;
    sinx = term;

    for (n = 1; n <= number; n++)
    {
        denominator = 2 * n * (2 * n + 1);
        term = -term * x * x / denominator;
        sinx = sinx + term;
    }

    printf("Sum of the sine series = %f\n", sinx);
    printf("Using Library function sin(%f) = %f\n", x, sin(x));

    return 0;
}

/*
Enter the number of terms in a series: 5
Enter the value of x (in degrees): 30

Sum of the sine series = 0.500000
Using Library function sin(0.523599) = 0.500000
*/