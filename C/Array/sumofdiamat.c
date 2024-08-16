#include<stdio.h>
int main(){

   int A[10][10], T[10][10];
   int i, j, r,c ;
   
//Input Matrix dimensions and Elements..
 printf("Enter the dimensions for A: ");
 scanf("%d %d",&r,&c);
 //printf("%d %d", r,c);
//taking input for A
 printf("Enter the eliments for A;\n");
 for (i=0; i<r; i++){
  for (j=0; j<c; j++)
  {
    printf("A[%d][%d]= ",i,j);
    scanf("%d", &A[i][j]);
  }
 }
   printf("\n");

  //printing mat A
  printf("A=");
  for (i=0; i<r; i++){
    for (j=0; j<c; j++)
    {    
        printf("\t");
        printf("%d ", A[i][j]);
       
    }
    printf("\n");
     
  }
  //sum of diagonal
  int sum=0;
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
        if(i==j)
        {
            sum= sum + A[i][j];
        }
    }
  }
   printf("\nSum of the diagonal Elements;\n");
   printf("Sum= %d", sum);

   return 0;

}