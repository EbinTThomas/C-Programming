/*2.Read n integers,
store them in an array and
search for an element in the array
using an algorithm for Linear Search*/
#include <stdio.h>

int main() {
    int n, i, x, arr[60], sum=0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &x);
    for (i=0; i<n; i++)
       if (x==arr[i])
        break;
    if (i<n)
        printf("%d is found at index %d\n", x, i);
    else
        printf("%d not found\n", x);
}