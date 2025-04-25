#include<stdio.h>

void main() {
    int r1, r2, c1, c2;
    printf("Enter the rows and columns for the first matrix:");
    scanf("%d %d", &r1, &c1);
    printf("Enter the rows and columns for the second matrix:");
    scanf("%d %d", &r2, &c2);

    if (r1 != c2 || c1 != r2) {
        printf("Matrix multipcation is not possible as dimensions do not match.\n");
        return;
    }

    int matrixA[r1][c1], matrixB[r2][c2], matrixC[r1][c1];

    printf("\nEnter values for the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            //printf("matrixA[%d][%d] = ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("\nEnter values for the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            //printf("matrixB[%d][%d] = ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Perform matrix multipcation
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            matrixC[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    
    printf("\nThe Mulipication of Matrix A and Matrix B is:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
}
