#include <stdio.h>

int main()
{
    int n = 1;
    int prime = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && n!=2)
        {
            prime = 1;
            break;
        }
    }

    if (prime)
    {
        printf("%d is not a prime number \n", n);
    }
    else
    {
        printf("%d is a prime number \n", n);
    }
    return 0;
}