#include<stdio.h>

int main()
{
    int n;
    float i, sum = 0;

    printf("Enter n = ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        sum = sum + 1.0/i;
    }

    printf("Sum is %.2f \n", sum);
    
    return 0;
}