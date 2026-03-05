#include <stdio.h>
int sum(int, int); // Function Prototype
int sum(int x, int y) // Function definition
{
    printf("The sum of %d and %d is %d \n", x, y, x + y);
}

int main()
{
    sum(12, 50); // Function calling
    sum(46, 64); // Function calling
    sum(4, 465); // Function calling

    return 0;
}