#include <stdio.h>
#include <string.h>
#define C_SIZE 50

union address
{
    char name[C_SIZE];
    char house[C_SIZE];
    char city[C_SIZE];
    char state[C_SIZE];
    int pin;
} a;

int main()
{
    printf("Enter Name:");
    fgets(a.name, C_SIZE, stdin);
    printf("\nEnter House:");
    fgets(a.house, C_SIZE, stdin);
    printf("\nEnter City:");
    fgets(a.city, C_SIZE, stdin);
    printf("\nEnter State:");
    fgets(a.state, C_SIZE, stdin);
    printf("\nEnter Pin:");
    scanf("%d", &a.pin);

    printf("\n%s\n%s\n%s\n%s\n%d\n", a.name, a.house, a.city, a.state, a.pin);
    return 0;
}