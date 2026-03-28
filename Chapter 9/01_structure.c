/**
 * @file 01_structure.c
 * @brief Basic introduction to structures in C.
 *
 * This program demonstrates how to define a structure, declare structure
 * variables, and access their members.
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
    // Declare two employee variables
    Employee emp1, emp2;

    // Initialize data for the first employee
    emp1.id = 101;
    strncpy(emp1.name, "Teki Manish", sizeof(emp1.name) - 1);
    emp1.name[sizeof(emp1.name) - 1] = '\0'; // Ensure null-termination
    emp1.salary = 56000.0f;

    // Initialize data for the second employee
    emp2.id = 102;
    strncpy(emp2.name, "Teki Arshit", sizeof(emp2.name) - 1);
    emp2.name[sizeof(emp2.name) - 1] = '\0'; // Ensure null-termination
    emp2.salary = 75000.0f;

    // Display details for employee 1
    printf("Employee 1 Details:\n");
    printf("  ID     : %d\n", emp1.id);
    printf("  Name   : %s\n", emp1.name);
    printf("  Salary : $%.2f\n\n", emp1.salary);

    // Display details for employee 2
    printf("Employee 2 Details:\n");
    printf("  ID     : %d\n", emp2.id);
    printf("  Name   : %s\n", emp2.name);
    printf("  Salary : $%.2f\n\n", emp2.salary);

    return 0;
}
