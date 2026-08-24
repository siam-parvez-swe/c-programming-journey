// write a programme that takes two integer and display sum
#include<stdio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter tow numbers : ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printf("The sum is : %d \n", sum);
    return 0;
}