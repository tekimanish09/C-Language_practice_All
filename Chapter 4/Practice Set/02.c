#include <stdio.h>
// Sum of first 10 natural numbers
int main()
{
    int n = 1;
    int sum;
    while (n <= 10)
    {
        sum += n;
        n++;
    }
    printf("%d", sum);
    return 0;
}