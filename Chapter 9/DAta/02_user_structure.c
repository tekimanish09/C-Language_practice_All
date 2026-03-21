#include <stdio.h>

struct employee
{
    int code;
    char name[50];
    float salary;
};

int main()
{
    struct employee e1, e2;

    printf("Enter your employee ID: ");
    scanf("%d", &e1.code);

    printf("Enter your employee Name: ");
    scanf("%49s", e1.name);
    
    printf("Enter your employee Salary: ");
    scanf("%f", &e1.salary);
    
    printf("\n \n");

    printf( "The employee id is: %d \n"
            "The employee name is: %s \n"
            "The employee salary is: %.2f \n\n",
           e1.code,e1.name,e1.salary);

    return 0;
}

