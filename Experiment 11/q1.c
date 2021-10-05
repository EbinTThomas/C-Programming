#include <stdio.h>

int swap(int *, int *);

int main(void)
{
    int a, b, sum;
    int *p, *q;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("\nBefore Swapping: a=%d, b=%d", a, b);
    swap(p, q);
    printf("\nAfter Swapping: a=%d, b=%d", a, b);
    printf("\nSum=%d\n", sum);
    return 0;
}

int swap(int *p, int *q) {
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}