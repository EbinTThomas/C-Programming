#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    struct employee
    {
        int id;
        char name[50];
        int salary;
    };
    printf("Enter number of Employees: ");
    scanf("%d", &n);

    struct employee arr[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        char y[50];
        int z;
        printf("\nEmployee %d\n-----------", i+1);

        printf("\nEnter Employee Id: ");
        scanf("%d", &arr[i].id);

        printf("\nEnter Employee Name: ");
        getchar();
        fgets(arr[i].name, 50, stdin);

        printf("\nEnter Salary: ");
        scanf("%d", &arr[i].salary);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\nId: %d\nName: %sSalary: %d\n", i + 1, arr[i].id, arr[i].name, arr[i].salary);
    }

    return 0;
}