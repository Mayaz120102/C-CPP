#include<stdio.h>
int main()
{

  int a1[5] ={10, 20, 30, 40, 50};
  int a2[5];
  int i;
  printf("a1=");
  for(i=0; i<5 ; i++)
  {
    printf("%d ", a1[i]);
  }
 for(i=0; i<5 ; i++)
 {
    a2[i]= a1[i];
 }
  printf("\n");
  printf("a2=");
  for(i=0; i<5 ; i++)
  {
    printf("%d ", a1[i]);
  }

}