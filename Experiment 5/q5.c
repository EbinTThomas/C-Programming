/* 5. Write a menu driven program
to find the results of
Addition, subtraction , multiplication, division and
modulus operation using switch */
#include <stdio.h>

int main() {
    unsigned int op;
    int num1, num2, result;
    printf("Enter First number:\n");
    scanf("%d", &num1);
    printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for modulus\n");
    scanf("%u", &op);
    printf("Enter Second number:\n");
    scanf("%d", &num2);
    switch(op) {
        case 1:
            result = num1 + num2;
            printf("%d + %d = %d", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%d - %d = %d", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%d x %d = %d", num1, num2, result);
            break;
        case 4:
            result = num1 / num2;
            printf("%d / %d = %d", num1, num2, result);
            break;
        case 5:
            result = num1 % num2;
            printf("%d %% %d = %d", num1, num2, result);
            break;

        default:
            printf("Invalid Operation");
            break;
    }
    return 0;
}