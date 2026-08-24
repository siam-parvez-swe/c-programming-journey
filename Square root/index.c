#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    double result = sqrt(x);
    printf("%.2lf \n", result);
    return 0;
}