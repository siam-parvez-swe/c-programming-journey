#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[] = "siam parvez";

    // Convert to uppercase
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("Str = %s\n", str);

    // Convert to lowercase
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }

    printf("Str = %s\n", str);

    return 0;
}