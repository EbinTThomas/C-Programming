// 3. Read a matrix and find its transpose
#include <stdio.h>

int main() {
    int r, c, a[10][10], transpose[10][10];
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEntered matrix:\n---------------\n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("%d  ", a[i][j]);
            if (j==c-1)
                printf("\n");
        }
    }
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    printf("\nTranspose matrix:\n---------------\n");
    for (int i=0; i<c; i++) {
        for (int j=0; j<r; j++) {
            printf("%d  ", transpose[i][j]);
            if (j==r-1)
                printf("\n");
        }
    }
    return 0;
}