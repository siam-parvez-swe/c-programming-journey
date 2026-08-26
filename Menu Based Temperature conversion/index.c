#include <stdio.h>

int main()
{
    int choice;
    float temp, convertedtemp;

    printf("Temperature conversion menu \n");
    printf("1. Farenheit to Celsius \n");
    printf("2. Celsius to Farenheit \n");
    printf("Enter your choise : ");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the Farenheit temperature : ");
        scanf("%f", &temp);
        convertedtemp = (temp - 32) / 1.8;
        printf("The temperature in Celsius is %f \n", convertedtemp);
        break;
    case 2:
        printf("Enter the Celsius temperature : ");
        scanf("%f", &temp);
        convertedtemp = (1.8 * temp) + 32;
        printf("The temperature in Farenheit is %f \n", convertedtemp);
        break;

    default:
        printf("Not a correct option");
        break;
    }

    return 0;
}