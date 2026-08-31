#include<stdio.h>

int main()
{
    int i, n, even = 0, odd = 0 ;

    printf("Enter ther last term = ");
    scanf("%d", &n);

    for ( i = 0; i <= n; i++)
    {
        if (i%2==0)
        {
            even = even + i;
        }
        else{
            odd = odd + i;
        }
        
        
    }
    printf("Result %d \n", odd-even );
    

    return 0;
}