/**
 * @file problem_06.c
 * @brief Problem 06: Create an array of complex numbers.
 *
 * This program allows users to input data for 5 complex numbers,
 * stores them in an array of structures, and then displays each
 * complex number using a dedicated function.
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

/**
 * @brief Displays a single complex number.
 * @param c The complex number structure to display.
 */
void display_complex(ComplexNumber c);

int main()
{
    const int NUM_COMPLEX = 5;
    ComplexNumber complex_array[NUM_COMPLEX];

    printf("--- Enter %d Complex Numbers ---\n", NUM_COMPLEX);

    // Loop through the array to get input for each complex number
    for (int i = 0; i < NUM_COMPLEX; i++)
    {
        printf("\nComplex Number #%d:\n", i + 1);

        printf("  Enter Real Part: ");
        if (scanf("%d", &complex_array[i].real) != 1)
        {
            printf("Invalid input. Expected an integer.\n");
            return 1;
        }

        printf("  Enter Imaginary Part: ");
        if (scanf("%d", &complex_array[i].imaginary) != 1)
        {
            printf("Invalid input. Expected an integer.\n");
            return 1;
        }
    }

    // Display all entered complex numbers
    printf("\n--- Displaying Complex Numbers ---\n");
    for (int i = 0; i < NUM_COMPLEX; i++)
    {
        printf("  Number %d: ", i + 1);
        display_complex(complex_array[i]);
    }

    return 0;
}

/**
 * @brief Displays a single complex number.
 * @param c The complex number structure to display.
 */
void display_complex(ComplexNumber c)
{
    printf("%d + %di\n", c.real, c.imaginary);
}
