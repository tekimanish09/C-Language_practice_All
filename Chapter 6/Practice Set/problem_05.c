// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

int sum(int *, int *);
float avg(int *, int *);

int sum(int *x, int *y)
{
    return *x + *y;
}

float avg(int *x, int *y)
{
    return sum(x, y) / 2.0;
}

int main()
{
    int a = 10;
    int b = 25;
    printf("The first value is %d and second value is %d \n", a, b);
    printf("The sum of 'a' and 'b' is %d \n", sum(&a, &b));
    printf("The average of 'a' and 'b' is %.2f \n", avg(&a, &b));
    return 0;
}