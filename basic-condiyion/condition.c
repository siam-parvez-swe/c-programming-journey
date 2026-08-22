#include<stdio.h>

int main ()
{
    int n;

    n=0;

    if(n<0){
        printf("%d is negative", n);
    }
    else if (n==0){
        printf("%d is zero", n);
    }
    else{
        printf("%d is positive", n);
    }
    return 0;
}