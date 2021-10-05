#include <stdio.h>
#include <math.h>

struct Point
{
    int x;
    int y;
} p1, p2;

int main()
{
    float result;
    printf("Enter point A(x1,y1): ");
    scanf("%d%d", &p1.x, &p1.y);
    printf("Enter point B(x2,y2): ");
    scanf("%d%d", &p2.x, &p2.y);
    int a=p2.x - p1.x;
    int b=p2.y - p1.y;
    int c=a*a + b*b;
    result=sqrt(c);
    printf("Distance AB: %.2f\n", result);
}