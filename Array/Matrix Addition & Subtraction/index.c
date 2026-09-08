#include <stdio.h>

int main()
{
    int i, j, numbersOfRows, numbersOfCols;
    int A[10][10], B[10][10], C[10][10], D[10][10];

    printf("Enter the number of col and row : ");
    scanf("%d%d", &numbersOfRows, &numbersOfCols);

    printf("Enter elements for A matrix \n");
    for (i = 0; i < numbersOfRows; i++)
    {
        for (j = 0; j < numbersOfCols; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
    for (i = 0; i < numbersOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numbersOfCols; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements for B matrix \n");
    for (i = 0; i < numbersOfRows; i++)
    {
        for (j = 0; j < numbersOfCols; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    printf("\n B = ");
    for (i = 0; i < numbersOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numbersOfCols; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n A + b = ");
    for (i = 0; i < numbersOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numbersOfCols; j++)
        {

            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    printf("\n A - B = ");
    for (i = 0; i < numbersOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numbersOfCols; j++)
        {
            D[i][j] = A[i][j] - B[i][j];
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }

    return 0;
}