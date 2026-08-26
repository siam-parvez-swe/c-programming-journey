#include <stdio.h>

int main()
{
    double num1, num2;
    char oper;

    printf("Enter an operator (+,-,*,/) : ");
    scanf("%c", &oper);

    printf("Enter two numbers : ");
    scanf("%.2lf %.2lf", &num1, &num2);

    

    switch (oper)
    {
    case '+':
    {
        printf("%.2lf + %.2lf = %.2lf \n", num1, num2, num1 + num2);
        break;
    }
    case '-':
    {
        printf("%.2lf - %.2lf = %.2lf \n", num1, num2, num1 - num2);
        break;
    }
    case '*':
    {
        printf("%.2lf * %.2lf = %.2lf \n", num1, num2, num1 * num2);
        break;
    }
    case '/':
    {
        printf("%.2lf / %.2lf = %.2lf \n", num1, num2, num1 / num2);
        break;
    }

    default:
        printf("Not a valid operator \n");
        break;
    }
    return 0;
}