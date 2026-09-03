#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int size = 2 * n - 1; // Calculate the size of the square
    int center = n - 1; 

    for (row = 0; row < size; row++)
    {
        for (col = 1; col < size; col++)
        {
            int distanceRow = abs(row-center);
            int distanceCol = abs(col-center);
            int distance ;
            if(distanceRow > distanceCol)
            {
                distance = distanceRow;
            }
            else
            {
                distance = distanceCol;
            }
            printf("%d ", distance + 1);
        }
        printf("\n");
    }
    return 0;
}