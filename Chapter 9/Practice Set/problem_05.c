/**
 * @file problem_05.c
 * @brief Problem 05: Represent a complex number using a structure.
 *
 * This program defines a structure to represent a complex number with
 * real and imaginary parts.
 */

#include <stdio.h>

/**
 * @struct ComplexNumber
 * @brief Represents a mathematical complex number (a + bi).
 */
typedef struct
{
    int real;      /**< Real part of the complex number */
    int imaginary; /**< Imaginary part of the complex number */
} ComplexNumber;

int main()
{
    // Initialize a complex number structure
    ComplexNumber c = {4, 8};

    // Display the complex number in standard form
    printf("Complex Number: %d + %di\n", c.real, c.imaginary);

    return 0;
}
