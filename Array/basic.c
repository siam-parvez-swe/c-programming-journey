#include <stdio.h>

int main()
{
    // array diclaration & initialization
    int numbers[5];
    int sum = 0;
    float average = 0.0;

    for (int index = 0; index < 5; index++)
    {
        printf("Enter the number [%d] = ", index );
        scanf("%d", &numbers[index]);
    }

    for (int index = 0; index < 5; index++)
    {
        printf("%d \n", numbers[index]);
        sum  = sum + numbers[index];
    }
    printf("Sum = %d \n", sum);
    average = (float)sum / 5;
    printf("Average = %.2f \n", average);

    return 0;
}