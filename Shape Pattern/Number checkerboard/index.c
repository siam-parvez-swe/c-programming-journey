#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            printf("%d ", (col + row) - 1);
        }
        printf("\n");
    }

    return 0;
}