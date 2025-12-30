#include <stdio.h>

int main()
{
    int i = 0, n;
    printf("Enter 'n' number: \n");
    scanf("%d", &n);
    do
    {
        printf("The natural number is %d \n", i);
        i++;

    } while (i <= n);
    return 0;
}