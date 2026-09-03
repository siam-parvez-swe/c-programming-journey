#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter the n: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (row == (n + 1) / 2 || col == (n + 1) / 2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}