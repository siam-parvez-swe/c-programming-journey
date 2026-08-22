#include<stdio.h>
#include<ctype.h>
int main()
{
    char upper, lower;
    printf("Enter a upper case letter : ");
    scanf("%c", &upper);

    lower = tolower(upper); 
    printf("Lower case letter : %c \n", lower);

    return 0;
}