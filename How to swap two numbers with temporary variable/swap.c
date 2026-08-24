#include<stdio.h>

int main()
{   
    int num1 = 7;
    int num2 = 2;

    // swap
    num1 = num1 - num2; //5
    num2 = num1 + num2; //7
    num1 = num2 - num1; //2

    printf("Num1 = %d \n", num1);
    printf("Num2 = %d \n", num2);


    return 0;
}