#include <stdio.h>

int rec(int n);

int main() {
    int n, result=1;

    printf("Enter a number to find factorial: ");
    scanf("%d", &n);

    for (int i=1;i<=n;i++) {
        result=result*i;
    }
    printf("\nFactorial:\n");
    printf("Without recursive: %d\n", result);
    printf("With recursive: %d\n", rec(n));
    return 0;
}

int rec(int n) {
    if (n>=1)
        return n*rec(n-1);
    else
        return 1;
}