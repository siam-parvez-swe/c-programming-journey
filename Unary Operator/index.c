#include<stdio.h>

int main ()
{
    // Unary Operator       Meaning

    // +                    Unary plus
    // -                    Nuary minus
    // ++                   Increment
    // --                   Decrement

    int x = 10;
    int result1 = +x;
    int result2 = -x;

    printf("%d \n", result1);
    printf("%d \n", result2);

    int z = 15;
    printf("z = %d \n", z); // z = 15
    printf("z = %d \n", z++); // z = 15
    printf("z = %d \n", z); // z = 16
    printf("z = %d \n", ++z); // z = 17
    printf("z = %d \n", z); // z = 17
    printf("z = %d \n", z--); // z = 17
    printf("z = %d \n", z); // z = 16
    printf("z = %d \n", --z); // z = 15
    printf("z = %d \n", z); // z = 15
    

    return 0;
}