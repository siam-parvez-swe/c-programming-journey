#include <stdio.h>

int main()
{
    int start, end, sum = 0;
    
    printf("Enter the first number of the series : ");
    scanf("%d", &start);

    printf("Enter the last number of the series : ");
    

    if (scanf("%d", &end) != 1)
    {
        printf("Invalid Input! please enter a valide integer \n");
        return 1;
    }

    if (end <= 0)
    {
        printf("Please enter a positive integer \n");
        return 1;
    }

    

    for ( int i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum is %d \n",sum);
    
    

    // printf("Do the calculation \n");

    return 0;
}