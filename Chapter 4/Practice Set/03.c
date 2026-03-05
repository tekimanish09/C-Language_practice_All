#include <stdio.h>
// Product of n number
int main()
{
    int product = 1;
    int n=4;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The product is %d", product);
    return 0;
}