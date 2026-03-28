/**
 * @file problem_04.c
 * @brief Problem 04: Illustrate the use of the arrow operator (->).
 *
 * This program demonstrates how to access structure members through
 * a pointer using the arrow operator in C.
 */

#include <stdio.h>

/**
 * @struct Employee
 * @brief Represents basic employee information.
 */
typedef struct
{
    int salary;   /**< Monthly salary of the employee */
    float rating; /**< Performance score or rating */
} Employee;

int main()
{
    // Declare an Employee variable
    Employee emp;

    // Create a pointer to the Employee variable
    Employee *emp_ptr = &emp;

    // Use the arrow operator to set member values via the pointer
    emp_ptr->salary = 56000;
    emp_ptr->rating = 6.5f;

    // Display the values using the arrow operator
    printf("--- Employee Record ---\n");
    printf("  Salary : %d\n", emp_ptr->salary);
    printf("  Rating : %.2f\n", emp_ptr->rating);
    printf("-----------------------\n");

    return 0;
}
