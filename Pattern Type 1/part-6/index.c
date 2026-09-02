#include<stdio.h>

int main()
{
    int n, row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for ( row = 0; row <= n; row++)
    {
        for ( col = 1; col <= row; col++)
        {
            printf("%c ", col+96);
        }

        printf("\n");
        
    }
    
    return 0;
}