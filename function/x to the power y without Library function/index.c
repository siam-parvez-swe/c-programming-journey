#include <stdio.h>
#include <math.h>

int main()
{
    double base, exp, result = 1, i;

    printf("Enter base = ");
    scanf("%lf", &base);

    printf("Enter Exponent = ");
    scanf("%lf", &exp);

    for (i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    printf("%.2lf \n", result);

    return 0;
}