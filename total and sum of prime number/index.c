#include <stdio.h>
#include <math.h>

int main()
{
    int number, counter, i, totalPrimeNumbers = 0, sumOfPrimeNumbers = 0, startingNumber, endingNumber;
    
    printf("Enter startingNumber number : ");
    scanf("%d", &startingNumber);
    printf("Enter endingNumber number : ");
    scanf("%d", &endingNumber);

    for (number = startingNumber; number <= endingNumber; number++)
    {
        counter = 0;

        if (number < 2)
        {
            counter = 1;
        }
        else
        {
            for (i = 2; i <= sqrt(number); i++)
            {
                if (number % i == 0)
                {
                    counter = 1;
                    break;
                }
            }
        }

        if (counter == 0)
        {
            printf("%d is a prime number\n", number);
            totalPrimeNumbers++;
            sumOfPrimeNumbers = sumOfPrimeNumbers + number;
        }
    }
    printf("\n Total prime numbers : totalPrimeNumbers %d  \n", totalPrimeNumbers);
    printf("Sum of prime number %d \n", sumOfPrimeNumbers);

    return 0;
}