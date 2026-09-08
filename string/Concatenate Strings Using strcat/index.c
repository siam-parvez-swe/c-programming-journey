#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30]="My name is  ";
    char str2[]="Siam Parvez";

    strcat(str1, str2);

    printf("str1 = %s \n", str1);
    printf("str2 = %s \n", str2);


    return 0;
}