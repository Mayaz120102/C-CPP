#include<stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int i, j, k, r1, r2, c1, c2;

    do {
        // Input for matrix A
        printf("Enter The Number of Rows & Columns for A: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter the elements of A:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                printf("A[%d][%d]= ", i, j);
                scanf("%d", &A[i][j]);
            }
            printf("\n");
        }

        printf("A= \n");
        for(i = 0; i < r1; i++) {
            printf("\t");
            for(j = 0; j < c1; j++) {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }

        // Input for matrix B
        printf("\nEnter The Number of Rows & Columns for B: ");
        scanf("%d %d", &r2, &c2);

        printf("Enter the elements of B:\n");
        for(i = 0; i < r2; i++) {
            for(j = 0; j < c2; j++) {
                printf("B[%d][%d]= ", i, j);
                scanf("%d", &B[i][j]);
            }
            printf("\n");
        }

        printf("B= \n");
        for(i = 0; i < r2; i++) {
            printf("\t");
            for(j = 0; j < c2; j++) {
                printf("%d ", B[i][j]);
            }
            printf("\n");
        }

        // Check if matrix multiplication is possible
        if(c1 != r2) {
            printf("Error: The number of columns in A must be equal to the number of rows in B.\nPlease re-enter the dimensions.\n");
        }

    } while(c1 != r2);  // Repeat if c1 is not equal to r2

    // Matrix multiplication
    int sum = 0;
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            sum = 0;
            for(k = 0; k < c1; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    // Print the result matrix C
    printf("Product of both matrices, C:\n");
    for(i = 0; i < r1; i++) {
        printf("\t");
        for(j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
