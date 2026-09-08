#include <stdio.h>

int main()
{
    int A[10][10], transpose[10][10], i, j, row, col;

    printf("Enter numner of rows and column for the matrix : ");
    scanf("%d %d", &row, &col);

    // getting the elements for the matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("A [%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // printing the matrix
    printf("\n Entried matrix \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // transpose matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }

    // print transpose matrix
    printf("\n Transpose matrix \n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}