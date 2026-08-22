#include<stdio.h>

int main()
{
    char lower;
    printf("Enter any lowercase lettrt : ");
    scanf("%c", &lower);

    printf("The uppercase letter : %c \n", lower - 32);
    return 0;
}