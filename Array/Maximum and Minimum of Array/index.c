#include <stdio.h>

int main()
{
    int num[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = num[0];
    int min = num[0];

    for (int i = 1; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
        if (min > num[i])
        {
            min = num[i];
        }
    }
    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);

    return 0;
}