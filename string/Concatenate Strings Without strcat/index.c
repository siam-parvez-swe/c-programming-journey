#include <stdio.h>

int main()
{
    char str1[50] = "My name is ";
    char str2[] = "Siam Parvez";

    int i = 0, len = 0, j = 0;

    while (str1[i] != '\0')
    {
        i++;
        len++;
    }

    while (str2[j] != '\0')
    {
        str1[len + j] = str2[j];
        j++;
    }

    str1[len + j] = '\0';

    printf("%s", str1);

    return 0;
}