#include <stdio.h>
#define A_SIZE 20
int main(void)
{
    int n;
    int arr[A_SIZE];
    int *p = arr;
    printf("Enter number of elements:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &*(p + i));
    }
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d]: %d\n", i, *(p + i));
    }

    return 0;
}