// FIBONACCI
#include <stdio.h>

int main() {
    int i, n, a=0, b=1, c=0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Numbers:\n");
    for(i=1;i<=n;i++) {
        a=b;
        b=c;
        c=a+b;
        printf("%d\n", c);
    }
    return 0;
}