#include<stdio.h>
#include<string.h>
struct Person
{
   char name[50];
   int age;
   float sal;
};
void show(struct Person person[], int n){
   for(int i =0; i<n;i++)
    {
        printf("info of person: %d\n",i+1);
        printf("Name: %s\n",person[i].name); 
        printf("Age= %d Sal= %.2f\n",person[i].age,person[i].sal);
    }

}

int main(){
    struct Person person[4];
    int n;
    scanf("%d",&n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        printf("enter the info of person %d\n",i+1);
        printf("enter the name: ");
        fflush(stdin);
        gets(person[i].name);
        //fgets(person[i].name,sizeof(person[i].name),stdin);
       // person[i].name[strcspn(person[i].name, "\n")] = '\0';
        printf("enter age and sal: ");
        scanf("%d %f",&person[i].age,&person[i].sal);
        getchar();
    }
  

    show(person,n);
}
