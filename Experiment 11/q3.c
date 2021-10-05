#include <stdio.h>

int sum(int arr[10], int n);
void main()
{
    int arr[10], n, i;
    int *ptr = arr;
    printf("Enter the number of elements you want to use(<=10): ");
    scanf("%d", &n);
    printf("\nEnter %d Elements:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nSum = %d", sum(arr, n));
}

int sum(int arr[10], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}