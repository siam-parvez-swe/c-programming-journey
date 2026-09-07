#include <stdio.h>

int main()
{
    int array1[30] ,n , array2[30], i;

    printf("Enter how many numbers : ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
    

    printf("Array1 = ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");
    printf("Array2 =");

    for (i = 0; i < n; i++)
    {
        array2[i] = array1[i];
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}