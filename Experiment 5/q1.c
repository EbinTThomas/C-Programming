/* 1.Write a program to check
whether given number isodd or even */
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num%2!=0) {
        printf("%d is odd", num);
    } else {
        printf("%d is even", num);
    }
    return 0;
}