#include<stdio.h>
#include<math.h>

int main()
{
    double x = 3.0001;
    double result = round(x);
    printf("round(%lf) = %lf \n", x, result);
    return 0;
}