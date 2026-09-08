#include <stdio.h>

int main()
{
    int A[10][10], i, j, row, col, upperSum = 0, lowerSum = 0;

    printf("Enter the elements for the matrix : \n");

    // getting the elements for the matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A [%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // printing the matrix
    printf("\nEntried matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i < j)
            {
                upperSum = upperSum + A[i][j];
            }
            if (i > j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }
    }

    // sum of upperSum and lowerSum
    printf("Sum of upperSum = %d \n", upperSum);
    printf("Sum of lowerSum = %d \n", lowerSum);

    return 0;
}