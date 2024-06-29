#include<stdio.h>
int main()
{
    int ar[5];
  for(int i=0;i<=4;i++){
  
    scanf("%d", &ar[i]);

  }
   for(int i=0;i<=4;i++){
    printf("%d", ar[i]);
  }
   printf("\n");
  int sum=0;
   for(int i =0; i<5; i++){
    sum =sum+ ar[i];
   }

  printf("%d\n",sum);

}