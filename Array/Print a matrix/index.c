#include <stdio.h>

int main()
{
    int matrix[3][2] ;
    // int matrix[3][2] = {
    //     {10, 20},
    //     {30, 40},
    //     {50, 60}};

    // printf("%d \n", matrix[0][0]);
    // printf("%d \n", matrix[0][1]);
    // printf("%d \n", matrix[1][0]);
    // printf("%d \n", matrix[1][1]);
    // printf("%d \n", matrix[2][0]);
    // printf("%d \n", matrix[2][1]);

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("Enter the value for matrix[%d][%d]: ", row, col);
            scanf("%d ", &matrix[row][col]);
        }
    }


    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        
        printf("\n");
    }
    

    return 0;
}