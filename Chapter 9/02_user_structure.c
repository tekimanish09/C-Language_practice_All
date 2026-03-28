/**
 * @file 02_user_structure.c
 * @brief Demonstrates taking user input to populate a structure.
 *
 * This program allows a user to input data for an employee and
 * then displays the stored information.
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
    Employee emp;

    printf("--- Enter Employee Information ---\n");

    // Input for Employee ID
    printf("Enter Employee ID: ");
    if (scanf("%d", &emp.id) != 1)
    {
        printf("Invalid input. Expected an integer.\n");
        return 1;
    }

    // Consume newline character from buffer to avoid skipping next input
    getchar();

    // Input for Employee Name
    printf("Enter Employee Name: ");
    // Using %49[^\n] to allow names with spaces and prevent buffer overflow
    if (scanf("%49[^\n]", emp.name) != 1)
    {
        printf("Invalid input for name.\n");
        return 1;
    }

    // Input for Employee Salary
    printf("Enter Employee Salary: ");
    if (scanf("%f", &emp.salary) != 1)
    {
        printf("Invalid input. Expected a float value.\n");
        return 1;
    }

    // Display the collected information
    printf("\n--- Employee Summary ---\n");
    printf("  ID     : %d\n", emp.id);
    printf("  Name   : %s\n", emp.name);
    printf("  Salary : $%.2f\n", emp.salary);
    printf("------------------------\n");

    return 0;
}
