#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter the n: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        // space print
        for (int space = 1; space <= row - 1; space++)
        {
            printf("  ");
        }

        // number print
        for (col = row; col <= n; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    for (row = n; row >= 1; row--)
    {
        // space print
        for (int space = 1; space <= row - 1; space++)
        {
            printf("  ");
        }

        // number print
        for (col = row; col <= n; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }

    return 0;
}