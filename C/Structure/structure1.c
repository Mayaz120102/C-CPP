#include<stdio.h>
///global structure

struct  Person
{
    int age;
    float sal;
};

int main()
{
  struct Person person1, person2;
  person1.age  = 45;
  person1.sal =50000.2;
  person2.age = 50;
  person2.sal = 75000;

  printf("Age = %d\n",person1.age);
  printf("sal = %f\n",person1.sal);
    printf("Age = %d\n",person2.age);
  printf("sal = %f\n",person2.sal);
}