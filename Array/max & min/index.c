#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, -40, -10, 34};
    int max = numbers[0];
    int min = numbers[0];

    for (int index = 0; index < 7; index++)
    {
        if (max < numbers[index])
        {
            max = numbers[index];
        }
        if (min > numbers[index])
        {
            min = numbers[index];
        }
    }

    printf("Maximum number is = %d \n", max);
    printf("Minimum number is = %d \n", min);
    return 0;
}