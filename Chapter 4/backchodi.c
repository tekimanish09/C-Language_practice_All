#include <stdio.h>

int main()
{
    int i = 0, n;
    printf("Enter 'n' number: \n");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("The natural number is %d \n", i);
        i++;

    }
    return 0;
}