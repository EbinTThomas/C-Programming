// 4. Read two matrices and find their sum
#include <stdio.h>

int main() {
    int r, c, A[10][10], B[10][10], C[10][10];
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    
    printf("Matrix A\n--------\n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMatrix B\n--------\n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrix A+B\n----------\n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d\t", C[i][j]);
            if (j==c-1)
                printf("\n");
        }
    }
    return 0;
}