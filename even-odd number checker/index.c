#include<stdio.h>

int main()
{
    int num , remainder;
    num = 5;
    remainder = num % 2;
    if(remainder==0){
        printf("%d is even number", num);
    }
    else
    {
        printf("%d is odd number", num);
    }
    
    return 0;
}