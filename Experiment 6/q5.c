// SUM OF DIGITS
#include <stdio.h>

int main() {
    int n, m, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0) {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}