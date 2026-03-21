#include <stdio.h>

struct employee
{
    int code;
    char name[50];
    float salary;
};

int main()
{
    int size;

    printf("Enter the size of structure: ");
    scanf("%d", &size);

    printf(" \n");

    struct employee e[size];

    for (int i = 0; i < size; i++)
    {
        printf("Employee number %d \n", i + 1);

        printf("Enter your employee ID: ");
        scanf("%d", &e[i].code);

        printf("Enter your employee Name: ");
        scanf("%49s", e[i].name);

        printf("Enter your employee Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n \n");

    for (int i = 0; i < size; i++)
    {
        printf("Employee number %d \n", i + 1);
        printf("The employee ID: %d \n", e[i].code);
        printf("The employee Name is: %s \n", e[i].name);
        printf("The employee Salary is: %.2f \n", e[i].salary);

        printf("\n \n");
    }

    return 0;
}