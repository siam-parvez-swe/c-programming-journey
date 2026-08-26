#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any letter : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Small Letter \n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Capital Letter \n");
    }
    else{
        printf("Not a letter \n");
    }
    
    return 0;
}