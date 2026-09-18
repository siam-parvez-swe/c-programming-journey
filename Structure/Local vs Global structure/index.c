#include<stdio.h>




int main()
{
    struct Person
{
    int age;
    float salary;
};

    struct Person person1, person2;

    person1.age = 40;
    person1.salary = 2740.45;
    person2.age = 22;
    person2.salary = 19283.23;

    printf("Person1");
    printf("Age = %d \n", person1.age);
    printf("Salary = %f \n \n", person1.salary);

    printf("Person2");
    printf("Age = %d \n", person2.age);
    printf("Salary = %f \n", person2.salary);
    
    return 0;
}