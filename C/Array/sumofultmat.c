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
  int usum=0, lsum=0;
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
        if(i<j)
        {
            usum= usum + A[i][j];
        }
        if(i>j){
            lsum= lsum+ A[i][j];
        }
    }
  }
  printf("usum= %d\n",usum);
  printf("lsum =%d",lsum);


}