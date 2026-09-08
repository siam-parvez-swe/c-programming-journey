#include <stdio.h>

int main()
{
    char s1[10];

    printf("Enter your full name ");
    fgets(s1, sizeof(s1), stdin);

    printf("Full Name: %s \n", s1);

    return 0;
}