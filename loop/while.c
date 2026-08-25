#include<stdio.h>

int main()
{
    int i = 1;
    while (i<=100)
    {
        printf("%d \n", i);
        ++i;
    }

    int n= 1;
    while (n <= 100)
    {
        printf("%d \n", n);
        n++;
        if(n>10){
            break;
        }
    }


    int a= 1;
    while (a <= 10)
    {
        
        a++;
        if(a % 2 == 0){
            continue;
        }
        printf("%d \n", a);
    }
    
    
    return 0;
}