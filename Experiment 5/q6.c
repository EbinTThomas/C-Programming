// 6. Find the value of y using conditional operator.
#include <stdio.h>

int main() {
    float x, y;
    printf("Enter value of x:\n");
    scanf("%f", &x);
    y = (x<100) ? (3*x)+50 : (x>100) ? (6.5*x)+100 : 500;
    printf("y=%.2f if x=%.2f", y, x);
    return 0;
}