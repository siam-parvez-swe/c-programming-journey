#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 5, 30, 55};

    int sizeOfArray = sizeof(numbers) / sizeof(numbers[0]);
    printf("Size of the array is: %d\n", sizeOfArray);

    if(sizeOfArray < 2)
    {
        printf("Array should have at least 2 elements to find the largest and second largest numbers.\n");
        return 1;
    }

    int first, second;

    if(numbers[0] > numbers[1])
    {
        first = numbers[0];
        second = numbers[1];
    }
    else
    {
        first = numbers[1];
        second = numbers[0];
    }

    for (int index = 2; index < sizeOfArray; index++)
    {
        if(numbers[index] > first)
        {
            second = first;
            first = numbers[index];
        }
        else if (numbers[index]>second && numbers[index] != first)
        {
            second = numbers[index];
        }
    }
    
    printf("First largest number is: %d\n", first);
    printf("Second largest number is: %d\n", second);

    return 0;
}