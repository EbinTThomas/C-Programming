#include <stdio.h>

void read(int A[10][10], int, int);
void display(int A[10][10], int, int);
void sum();
void product();
void transpose();

int main() {
    int opn;
    menu:
    printf("1 -> Sum of two matrices\n2 -> Product of two matrices\n3 -> Transpose of a matrix\n4 -> Exit\n[*] Choose an option: ");
    label:
    scanf("%d", &opn);
    switch (opn)
    {
    case 1:
        sum();
        break;
    case 2:
        product();
        break;
    case 3:
        transpose();
        break;
    case 4:
        return 0;
    default:
        printf("[*] Choose another option: ");
        goto label;
        break;
    }
    printf("\n");
    goto menu;
    return 0;
}

void read(int A[10][10], int r, int c) {
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("matrix [%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
            if (j==c-1)
                printf("\n");
        }
    }
}

void display(int A[10][10], int r, int c) {
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("%d\t", A[i][j]);
            if (j==c-1)
                printf("\n");
        }
    }
}

void sum(){
    int A[10][10], B[10][10], C[10][10], r, c;
    printf("Enter number of rows & columns: ");
    scanf("%d%d", &r, &c);
    printf("Matrix A:\n");
    read(A, r, c);
    printf("Matrix B:\n");
    read(B, r, c);

    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++) {
            C[i][j]=A[i][j] + B[i][j];
        }
    printf("Matrix A+B:\n");
    display(C, r, c);
}

void product() {
    int A[10][10], B[10][10], C[10][10], r1, c1, r2, c2, sum=0, product;
    printf("Enter number of rows & columns of matrix A: ");
    scanf("%d%d", &r1, &c1);
    read(A, r1, c1);
    printf("Enter number of rows & columns of matrix B: ");
    scanf("%d%d", &r2, &c2);
    if (c1!=r2)
        printf("Multiplication isn't possible\n");
    else {
        read(B, r2, c2);

        for (int i=0; i<r1; i++) {
            for (int j=0; j<c2; j++) {
                for (int k=0; k<r2; k++) {
                    sum=sum + A[i][k]*B[k][j];
                }
                C[i][j]=sum;
                sum=0;
            }
        }
        printf("Product:\n");
        display(C, r1, c2);
    }
}

void transpose() {
    int A[10][10], B[10][10], r, c;
    printf("Enter number of rows & columns: ");
    scanf("%d%d", &r, &c);
    read(A, r, c);
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++) {
            B[i][j]=A[j][i];
        }
    printf("Transpose:\n");
    display(B, r, c);
}