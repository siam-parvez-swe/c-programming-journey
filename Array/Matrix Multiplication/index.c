#include <stdio.h>

int main()
{
    // 1st matrix col number == 2nd matrix row number

    int first[10][10], second[10][10], result[10][10], r1, r2, c1, c2, i, j, k;

    printf("Enter rows and columns for the 1st matrix : ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the 2nd matrix : ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("Error !! column of first matrix is not equal to row of second matrix \n");

        printf("Enter rows and columns for the 1st matrix : ");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and columns for the 2nd matrix : ");
        scanf("%d %d", &r2, &c2);
    }

    // taking input for 1st matrix
    printf("first matrix input \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("First [%d][%d] ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    // taking input for 2nd matrix
    printf("second matrix input \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Second [%d][%d] ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // print 1st matrix
    printf("\n \n First Matrix = ");
    for (i = 0; i < r1; i++)
    {
        printf("\n");
        for (j = 0; j < c1; j++)
        {
            printf("%d", first[i][j]);
        }
    }

    // print 2nd matrix
    printf("\n \n Second Matrix = ");
    for (i = 0; i < r2; i++)
    {
        printf("\n");
        for (j = 0; j < c2; j++)
        {
            printf("%d", second[i][j]);
        }
        printf("\n");
    }

    return 0;
}