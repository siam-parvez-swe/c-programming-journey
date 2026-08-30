#include <stdio.h>

int main()
{
    float n, i, sum = 0;

    printf("Enter n = ");
    scanf("%.2f", &n);
    for (i = 1.5; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum is %.2f \n", sum);

    return 0;
}