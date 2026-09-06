#include <stdio.h>

int main()
{
    int num[5], sum = 0;
    float average = 0;
    printf("Enter 5 numbers: ");
    // scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
        sum += num[i];
    }
    average = (float)sum / 5;
    printf("\nSum: %d \n", sum);
    printf("Average: %f \n", average);
    return 0;
}