#include<stdio.h>
int main()
{
  int A[10][10], B[10][10], C[10][10];
  int i ,j,k, r1,r2,c1,c2;
  printf("Enter The Number of Row & Column for A: ");
  scanf("%d %d",&r1,&c1);
 
    printf("enter the elements of A: ");
    printf("\n");

  for(i=0; i<r1; i++){
    for(j=0; j<c1; j++){

        printf("A[%d][%d]= ",i,j);
        scanf("%d",&A[i][j]);
    }
     printf("\n");
}   
    printf("A= ");
    for(i=0; i<r1; i++){
        printf("\t");
    for(j=0; j<c1; j++){
        printf("%d ",A[i][j]);
    }
    printf("\n");
  }





  printf("\nEnter The Number of Row & Column for B: ");
  scanf("%d %d",&r2,&c2);

   printf("enter the elements of B: ");
    printf("\n");

  for(i=0; i<r2; i++){
    for(j=0; j<c2; j++){

        printf("B[%d][%d]= ",i,j);
        scanf("%d",&B[i][j]);
    }
     printf("\n");
}   
    printf("B= ");
    for(i=0; i<r2; i++){
        printf("\t");
    for(j=0; j<c2; j++){
        printf("%d ",B[i][j]);
    }
    printf("\n");
  }
      int sum =0;
      if(c1==r2){
        
        for(i=0; i<r1; i++){
    for(j=0; j<c2; j++){
        for(k=0; k<c1; k++)
        {
            sum= sum+ A[i][k]*B[k][j];
        }
        C[i][j]= sum;
        sum=0;
    }
  }
      printf("mul of both mat C:");
    printf("\nC= ");
    for(i=0; i<r1; i++){
        printf("\t");
        for(j=0; j<c2; j++)
        printf("%d ",C[i][j]);
        printf("\n");
    }

 }

 else
 printf("erorr c1 not r2 so mat mul cannot possible");
 


}