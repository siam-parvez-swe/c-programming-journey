#include <stdio.h>

int main()
{
    char upper;
    printf("Enter a uppercase letter : ");
    scanf("%c", &upper);

    printf("The lowercase letter %c \n", upper + 32);
    return 0;
}