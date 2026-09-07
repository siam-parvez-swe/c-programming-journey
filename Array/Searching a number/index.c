#include <stdio.h>

int main()
{
    int num[] = {22, 64, 34, 94, 12, 46};
    int value, pos = -1;

    printf("Enter the value you want to search : ");
    scanf("%d", &value);

    for (int i = 0; i < 6; i++)
    {
        if (value == num[i])
        {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1)
    {
        printf("Item is not found.");
    }
    else
    {
        printf("The value is found position %d \n", pos);
    }

    return 0;
}