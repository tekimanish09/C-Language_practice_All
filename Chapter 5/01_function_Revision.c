#include <stdio.h>
#include <math.h>
void product(int, int);
void product(int x, int y)
{
    printf("The power of %d^%d is %f \n", x, y, pow(x, y));
}

int main()
{
    product(25, 6);
    product(665, 4);
    product(46,6);
    return 0;
}