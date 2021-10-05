// ARMSTRONG
#include <stdio.h>

int main() {
    int n, temp, remainder, result=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    
    while(n!=0) {
        remainder=n%10;
        result=result+remainder*remainder*remainder;
        n=n/10;
    }

    if(result==temp) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}