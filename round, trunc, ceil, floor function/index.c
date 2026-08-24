#include<stdio.h>
#include<math.h>

int main()
{
    double x = 3.1;
    double result1 = round(x);
    double result2 = trunc(x);
    double result3 = ceil(x);
    double result4 = floor(x);

    printf("round(%lf) = %lf \n", x, result1);
    printf("trunc(%lf) = %lf \n", x, result2);
    printf("ceil(%lf) = %lf \n", x, result3);
    printf("floor(%lf) = %lf \n", x, result4);

    return 0;
}