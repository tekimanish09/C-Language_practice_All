// Q) Try problem 3 using call by value and verify that it does not change the value of the said variable.
        // Q3) Write a program to change the value of a variable to ten times of its current value.

#include <stdio.h>
void pro(int);
void pro(int x)
{
    x = x * (10);
}

int main()
{
    int x;
    printf("Enter a value: ");
    scanf("%d", &x);
    pro(x);
    printf("The value is now %d \n", x);
    return 0;
}