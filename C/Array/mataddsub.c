#include<stdio.h>
int main()
{
  int A[10][10], B[10][10], C[10][10];
  int i, j, rows, cols;

  printf("enter the numb of rows and cols: ");
  scanf("%d %d", &rows,&cols);

  printf("enter the elements of mat A: ");
  printf("\n");

  for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){

        printf("A[%d][%d]= ",i,j);
        scanf("%d",&A[i][j]);
    }
     printf("\n");
}   
    printf("A= ");
    for(i=0; i<rows; i++){
        printf("\t");
    for(j=0; j<cols; j++){
        printf("%d ",A[i][j]);
    }
    printf("\n");
  }

   printf("\n");
   printf("enter the elements of mat B: ");
  printf("\n");

  for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){

        printf("B[%d][%d]= ",i,j);
        scanf("%d",&B[i][j]);
    }
     printf("\n");
}  
    printf("B= ");
    for(i=0; i<rows; i++){
        printf("\t");
    for(j=0; j<cols; j++){
        printf("%d ",B[i][j]);
    }
    printf("\n");
  }
  
  printf("the sum of matrix A+B=C");
    for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
        C[i][j] = A[i][j] + B[i][j];
         
    }
     
  }
   printf("\n\n");
   printf("C= ");
   printf("\t");
    for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
        printf("%d ",C[i][j]);
    }
    printf("\n");
       printf("\t");
  }

  printf("the sub of matrix A-B=C");
    for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
        C[i][j] = A[i][j] - B[i][j];
         
    }
     
  }
   printf("\n\n");
   printf("C= ");
   printf("\t");
    for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
        printf("%d ",C[i][j]);
    }
    printf("\n");
       printf("\t");
  }

   
}