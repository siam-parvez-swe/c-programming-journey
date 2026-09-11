#include <stdio.h>

double triangleArea(double a, double b)
{
    return 0.5 * a * b;
}

int main()
{
    double base, height;

    printf("Enter base ");
    scanf("%lf", &base);

    printf("Enter height ");
    scanf("%lf", &height);

    double result = triangleArea(base, height);

    printf("Area of a triangle %lf \n", result);

    return 0;
}