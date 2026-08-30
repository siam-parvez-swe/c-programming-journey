#include <stdio.h>
#include<math.h>


int main()
{
    int num, temp, rem, sum = 0, digitCount = 0;

    printf("Enter any positive number : ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if (num == sum)
        printf("Armstrong number \n");
    else
        printf("Not Armstrong number");

    return 0;
}