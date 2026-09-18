#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int age;
    double salary;
};

void display(struct Person p)
{
    printf("Name: %s\n", p.name);
    printf("Age: %s\n", p.age);
    printf("Salary: %s\n", p.salary);
}

int main()
{
    struct Person person1, person2;

    strcpy(person1.name, "Siam");
    person1.age = 20;
    person1.salary = 40000;

    strcpy(person1.name, "Parvez");
    person1.age = 13;
    person1.salary = 70000;

    display(person1);

    return 0;
}