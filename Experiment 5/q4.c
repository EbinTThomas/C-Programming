/* 4.Write a program to print Electricity Bill.
Read customer number and power consumed and print the
amount to be paid by customer
according to the following criteria */
#include <stdio.h>

int main() {
    unsigned long int id;
    float a, a200, a400, a600, temp, amount;
    printf("Enter Customer Number:\n");
    scanf("%lu", &id);
    printf("Enter Power Consumed:\n");
    scanf("%f", &a);
    if (a<=200) {
        amount=(a*0.50);
        printf("a=%.2f x Rs. 0.50\n", a);
        printf("Customer Id: %lu\nAmount to be paid:%.2f", id, amount);
    }
    else if (a<=400) {
        a200=a-200;
        temp=a-a200;
        a=temp;

        amount=100+(a200*0.65)+(a*0.50);
        printf("a=%.2f x Rs. 0.50\na200=%.2f x Rs. 0.65\n", a, a200);
        printf("Customer Id: %lu\nAmount to be paid:%.2f", id, amount);
    }
    else if (a<=600) {
        a200=a-200;
        temp=a-a200;
        a=temp;

        a400=a200-200;
        temp=a200-a400;
        a200=temp;

        amount=230+(a400*0.8)+(a200*0.65)+(a*0.50);
        printf("a=%.2f x Rs. 0.50\na200=%.2f x Rs. 0.65\na400=%.2f x Rs. 0.8\n", a, a200, a400);
        printf("Customer Id: %lu\nAmount to be paid:%.2f", id, amount);
    }
    else {
        a200=a-200;
        temp=a-a200;
        a=temp;

        a400=a200-200;
        temp=a200-a400;
        a200=temp;

        a600=a400-200;
        temp=a400-a600;
        a400=temp;
        
        amount=390+a600+(a400*0.8)+(a200*0.65)+(a*0.50);
        printf("a=%.2f x Rs. 0.50\na200=%.2f x Rs. 0.65\na400=%.2f x Rs. 0.80\na600=%.2f x Rs. 1.00\n", a, a200, a400, a600);
        printf("Customer Id: %lu\nAmount to be paid:%.2f", id, amount);
    }
    return 0;
}