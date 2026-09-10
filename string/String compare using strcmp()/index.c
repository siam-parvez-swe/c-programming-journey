#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Siam Parvez";
    char str2[] = "Siam";

    int d = strcmp(str1, str2);

    if (d==0)
    {
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
    

    

    return 0;
}