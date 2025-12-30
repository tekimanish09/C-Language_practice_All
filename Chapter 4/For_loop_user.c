// Code for Soft coded value (user based) ^_^
// Prints a message user-specified number of times using a for loop

#include <stdio.h>

int main()
{
    int n;
    printf("Enter 'n' number: \n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("The value of 'i' is %d \n", i);
    }
    return 0;
}