#include<stdio.h>
//global structure
struct Person
{

    int age; 
    float sal;
};
//struct Person person1, person2; //global variable

int main(){
   /* struct structure2
    {
        int age;
        float sal;
    };*/
    struct Person person1, person2;
    
    printf("enter the age and sal of person1: ");

    scanf("%d %f",&person1.age,&person1.sal);
    
    printf("Age= %d Sal= %f\n",person1.age,person1.sal);
    
    
}