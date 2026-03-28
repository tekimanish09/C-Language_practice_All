/**
 * @file 04_function_struct.c
 * @brief Demonstrates the use of structures with functions in C.
 *
 * This program allows users to input data for multiple employees,
 * stores them in an array of structures, and then displays the data
 * for a specific employee selected by the user.
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

/**
 * @brief Displays the details of a single employee.
 * @param emp The employee structure to be displayed.
 */
void display_employee(Employee emp);

/**
 * @brief Inputs data for multiple employees from the user.
 * @param employees Array of Employee structures to store the data.
 * @param size Number of employees to input.
 */
void input_employee_data(Employee employees[], int size);

int main()
{
    int array_size, target_index;

    // Prompt user for the number of employees to enter
    printf("Enter the number of employees: ");
    if (scanf("%d", &array_size) != 1 || array_size <= 0)
    {
        printf("Invalid input. Please enter a positive integer for size.\n");
        return 1;
    }

    // Declare an array of Employee structures using variable-length array (VLA)
    Employee employees[array_size];

    printf("\n--- Input Employee Data ---\n");
    input_employee_data(employees, array_size);

    printf("\n--- View Employee Details ---\n");
    printf("Enter the employee number to display (1 to %d): ", array_size);
    if (scanf("%d", &target_index) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Validate the target index provided by the user
    if (target_index < 1 || target_index > array_size)
    {
        printf("Invalid index! Please enter a value between 1 and %d.\n", array_size);
        return 1;
    }

    // Display the details of the selected employee
    display_employee(employees[target_index - 1]);

    return 0;
}

/**
 * @brief Displays the details of a single employee.
 * @param emp The employee structure to be displayed.
 */
void display_employee(Employee emp)
{
    printf("\nEmployee Details:\n");
    printf("  ID     : %d\n", emp.id);
    printf("  Name   : %s\n", emp.name);
    printf("  Salary : $%.2f\n", emp.salary);
    printf("--------------------------\n");
}

/**
 * @brief Inputs data for multiple employees from the user.
 * @param employees Array of Employee structures to store the data.
 * @param size Number of employees to input.
 */
void input_employee_data(Employee employees[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEmployee #%d\n", i + 1);

        printf("  Enter Employee ID: ");
        scanf("%d", &employees[i].id);

        // Consume newline character from buffer to avoid skipping next input
        getchar();

        printf("  Enter Employee Name: ");
        // Using %49[^\n] to allow names with spaces and prevent buffer overflow
        scanf("%49[^\n]", employees[i].name);

        printf("  Enter Employee Salary: ");
        scanf("%f", &employees[i].salary);
    }
}
