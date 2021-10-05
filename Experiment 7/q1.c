/* 1.Read n integers,
store them in an array and
find their sum and average */
#include <stdio.h>

int main() {
    int n, i, arr[60], sum=0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
        avg=(float)sum/n;
    }
    printf("Sum: %d\nAverage: %.2f\n", sum, avg);
}