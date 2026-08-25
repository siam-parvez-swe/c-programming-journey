#include <stdio.h>

int main()
{
    float num;
    printf("Enter a number : ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("%f is positive number \n", num);
    }
    else if (num < 0)
    {
        printf("%f is negative number \n", num);
    }
    else
    {
        printf("%f is zero \n", num);
    }
    return 0;
}