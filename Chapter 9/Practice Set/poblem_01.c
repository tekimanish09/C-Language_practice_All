/**
 * @file poblem_01.c
 * @brief Problem 01: Define 2D and 3D vectors using structures.
 *
 * This program demonstrates how to define a structure representing a vector
 * with three components (i, j, k) and display them in standard vector notation.
 */

#include <stdio.h>

/**
 * @struct Vector
 * @brief Represents a mathematical vector in 3D space.
 */
typedef struct
{
    int i; /**< x-component (unit vector i) */
    int j; /**< y-component (unit vector j) */
    int k; /**< z-component (unit vector k) */
} Vector;

int main()
{
    // Initialize a 3D vector
    Vector vec = {15, 24, 56};

    // Display the vector in 2D notation (ignoring k)
    printf("2D Vector representation: %di + %dj\n", vec.i, vec.j);

    // Display the vector in 3D notation
    printf("3D Vector representation: %di + %dj + %dk\n", vec.i, vec.j, vec.k);

    return 0;
}
