#include<stdio.h>

int main()
{
    int numbers[]={10, 20, 30, 40, 50, 60};
    int searchNumber = 70;
    int found = -1;

    for (int index = 0; index < 6; index++)
    {
        if(numbers[index] == searchNumber)
        {
            found = index;    
            break;
        }
        
    }
    if(found == -1)
    {
        printf("Number not found \n");
    }
    else
    {
        printf("Number found at index %d \n", found);
    }
    

    return 0;
}