/**
 * @file problem_02.c
 * @brief Problem 02: Implement a function to sum two 2D vectors.
 *
 * This program demonstrates how to define a structure for 2D vectors
 * and a function that takes two vectors as arguments and returns their sum.
 */

#include <stdio.h>

/**
 * @struct Vector2D
 * @brief Represents a mathematical vector in 2D space.
 */
typedef struct
{
    int i; /**< x-component (unit vector i) */
    int j; /**< y-component (unit vector j) */
} Vector2D;

/**
 * @brief Calculates the sum of two 2D vectors.
 * @param v1 The first 2D vector.
 * @param v2 The second 2D vector.
 * @return A new Vector2D structure representing the sum (v1 + v2).
 */
Vector2D sum_vectors(Vector2D v1, Vector2D v2);

int main()
{
    // Define two 2D vectors
    Vector2D v1 = {5, 25};
    Vector2D v2 = {20, 25};

    // Calculate the sum using the sum_vectors function
    Vector2D sum = sum_vectors(v1, v2);

    // Display the result
    printf("Vector 1: %di + %dj\n", v1.i, v1.j);
    printf("Vector 2: %di + %dj\n", v2.i, v2.j);
    printf("Sum     : %di + %dj\n", sum.i, sum.j);

    return 0;
}

/**
 * @brief Calculates the sum of two 2D vectors.
 * @param v1 The first 2D vector.
 * @param v2 The second 2D vector.
 * @return A new Vector2D structure representing the sum (v1 + v2).
 */
Vector2D sum_vectors(Vector2D v1, Vector2D v2)
{
    Vector2D result = {v1.i + v2.i, v1.j + v2.j};
    return result;
}
