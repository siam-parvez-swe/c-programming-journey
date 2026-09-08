#include <stdio.h>

int main()
{
    int A[10][10], i, j, row, col, sum = 0;

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
    printf("\n Entried matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Sum of diagonal elements of a matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d ", A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }

    // print Sum of diagonal elements of a matrix
    printf("Sum of diagonal elements = %d \n", sum);

    return 0;
}