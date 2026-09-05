#include <stdio.h>

int main()
{
    int A[3][2], B[3][2], C[3][2];

    // A matrix input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("A[%d][%d]: ", row, col);
            scanf("%d", &A[row][col]);
        }
    }

    // A matrix output
    printf("\nA matrix:\n");
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    // B matrix input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("B[%d][%d]: ", row, col);
            scanf("%d", &B[row][col]);
        }
    }

    // B matrix output
    printf("\nB matrix:\n");
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("%d ", B[row][col]);
        }

        printf("\n");
    }

    // C matrix addition
    printf("\nC matrix (A + B):\n");
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("%d ", B[row][col] + B[row][col]);
        }

        printf("\n");
    }

    return 0;
}