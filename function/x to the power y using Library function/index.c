#include <stdio.h>
#include <math.h>

int main()
{
    double base, exp, result;

    printf("Enter base = ");
    scanf("%lf", &base);

    printf("Enter Exponent = ");
    scanf("%lf", &exp);

    result = pow(base, exp);

    printf("%lf \n", result);

    return 0;
}