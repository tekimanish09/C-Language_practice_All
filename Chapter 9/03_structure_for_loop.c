/**
 * @file 03_structure_for_loop.c
 * @brief Demonstrates using arrays of structures with loops.
 *
 * This program allows a user to input data for multiple employees
 * and then iterates through the array to display each employee's information.
 */

#include <stdio.h>
#include <string.h>

/**
 * @struct Employee
 * @brief Represents an employee's basic information.
 */
typedef struct
{
    int id;           /**< Unique identification code for the employee */
    char name[50];    /**< Name of the employee */
    float salary;     /**< Monthly salary of the employee */
} Employee;

int main()
{
    int num_employees;

    // Ask user for the number of employees to enter
    printf("Enter the number of employees to register: ");
    if (scanf("%d", &num_employees) != 1 || num_employees <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Declare an array of structures using variable-length array (VLA)
    Employee employees[num_employees];

    printf("\n--- Input Employee Data ---\n");
    for (int i = 0; i < num_employees; i++)
    {
        printf("\nEmployee Registration #%d\n", i + 1);

        printf("  Enter Employee ID: ");
        scanf("%d", &employees[i].id);

        // Consume newline character from buffer to avoid skipping next input
        getchar();

        printf("  Enter Employee Name: ");
        // Using %49[^\n] to allow names with spaces and prevent buffer overflow
        if (scanf("%49[^\n]", employees[i].name) != 1)
        {
            printf("Invalid input for name.\n");
            return 1;
        }

        printf("  Enter Employee Salary: ");
        if (scanf("%f", &employees[i].salary) != 1)
        {
            printf("Invalid input. Expected a float value.\n");
            return 1;
        }
    }

    // Display the details of all registered employees
    printf("\n--- List of Registered Employees ---\n");
    for (int i = 0; i < num_employees; i++)
    {
        printf("Employee #%d\n", i + 1);
        printf("  ID     : %d\n", employees[i].id);
        printf("  Name   : %s\n", employees[i].name);
        printf("  Salary : $%.2f\n", employees[i].salary);
        printf("--------------------------\n");
    }

    return 0;
}
