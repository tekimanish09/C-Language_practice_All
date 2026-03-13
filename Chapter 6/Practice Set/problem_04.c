// Q) Write a function and pass the value by reference. (We have been doing it all the time now)
/*  modifying the value of a variable in calling function using * and & operators is known as "value by reference" */
// Q) Write a program to change the value of a variable to thirty times of its current value.

#include <stdio.h>
void pro(int *);
void pro(int *x)
{
    *x = *x * (30);
}

int main()
{
    int x;
    printf("Enter a value: ");
    scanf("%d", &x);
    // printf("The current address of the variable 'i' is %p \n",&x);
    pro(&x);
    printf("The value is now %d \n", x);
    //  printf("The updated address of the variable 'a' is %p \n",&x);
    return 0;
}