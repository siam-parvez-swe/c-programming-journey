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

    if (person2.age==person3.age && person2.salary==person3.salary)
    {
        printf("Person1 equal Person2");
    }
    else{
        printf("Person1 not equal Person2");
    }
    
    


    return 0;
}