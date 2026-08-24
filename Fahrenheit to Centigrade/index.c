#include<stdio.h>

int main()
{
    float c, F;
    printf("Enter Fahrenheit : ");
    scanf("%f", &F);

    c = (F - 32)/1.8 ;
    printf("Centigrade = %.2f \n", c);
    return 0;
}