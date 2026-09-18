#include <stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1 = {27, 23463};
    struct Person person2, person3;

    // element wise assignment
    person2.age = 32;
    person2.salary = 50000;

    // structure variable assignment
    person3 = person2;

    printf("Enter information for Person1 \n");
    printf("Enter age : ");
    scanf("%d", &person1.age);
    printf("Enter salary : ");
    scanf("%f", &person1.salary);

    printf("\n\nEnter information for Person2\n");
    printf("Enter age : ");
    scanf("%d", &person2.age);
    printf("Enter salary : ");
    scanf("%f", &person2.salary);

    printf("Person1");
    printf("Age = %d \n", person1.age);
    printf("Salary = %f \n \n", person1.salary);

    printf("Person2");
    printf("Age = %d \n", person2.age);
    printf("Salary = %f \n", person2.salary);

    return 0;
}