/* 3. Write a program to find
the grades of a student.
Read student name and 3 marks.
Find total and Average marks.
Assign grades according to the following criteria
Print student name, marks, Total Marks, Average and Grade. */
#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sum, avg;
    char name[60];
    char* grade;
    printf("Enter name:\n");
    fgets(name, 60, stdin);
    printf("Enter 3 marks:\n");
    scanf("%f %f %f", &sub1, &sub2, &sub3);
    sum = sub1+sub2+sub3;
    avg = sum/3;
    if (avg>=80) {
        grade="Honours";
    }
    else if (avg>=60) {
    	grade="First Division";
    }
    else if (avg>=50) {
    	grade="Second Division";
    }
    else if (avg>=40) {
    	grade="Third Division";
    }
    else {
    	grade="Fail";
    }
    printf("Name: %s\nTotal marks: %.2f\nAverage marks: %.2f\nGrade: %s", name, sum, avg, grade);
    return 0;
}