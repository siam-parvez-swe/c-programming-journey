#include<stdio.h>

int main()
{
    float marks;
    printf("Enter your number : ");
    scanf("%f", &marks);
    if(marks >= 80 && marks <= 100){
        printf("You got A+ \n");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("You got A \n");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("You got A- \n");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("You got B \n");
    }
    else if (marks >= 40 && marks <= 49)
    {
        printf("You got B- \n");
    }
    else if (marks >= 33 && marks <= 39)
    {
        printf("You got D \n");
    }
    else if (marks<33)
    {
        printf("You are fail");
    }
    
    
    return 0;
}