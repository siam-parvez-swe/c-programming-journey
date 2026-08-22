#include <stdio.h>
#include <ctype.h>
int main()
{
    char lower, upper;
    printf("Enter any lowercase letter : ");
    scanf("%c", &lower);
    upper = toupper(lower);
    printf("Uppercase letter = %c \n", upper);
    return 0;
}