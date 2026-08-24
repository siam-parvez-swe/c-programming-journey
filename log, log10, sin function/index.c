#include<stdio.h>
#include<math.h>

int main()
{
    double x = 10.7;
    double y = 0.35;
    double result = log(x);
    double result2 = sin(x);
    printf("log10(%lf) = %lf\n", x, result);
    printf("exp(%lf) = %lf\n", x, result);
    printf("sin(%lf) = %lf\n", y, result2);
    return 0;
}