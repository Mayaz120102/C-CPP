#include<stdio.h>
int main()
{
  int ar[3][4];
  int i,j;
  printf("enter the array: ");
  for(i=0; i<3; i++){
    for(j=0; j<4; j++){
        scanf("%d",&ar[i][j]);
    }
  }
   for(i=0; i<3; i++){
    for(j=0; j<4; j++){
        printf("%d ",ar[i][j]);
    }
    printf("\n");
  }

}