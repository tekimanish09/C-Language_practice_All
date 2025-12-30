// Code for Soft coded value (user based) ^_^
// Prints a message user-specified number of times using a while loop

#include <stdio.h>

int main()
{
    int value1, i = 0;
    printf("Enter the number of times you want to print: \n");
    scanf("%d", &value1);

    while (i < value1)
    {
        printf("You can Anything and Everything, Bro!!!! %d \n", i);
        i++; // i = i + 1;
    }

    return 0;
}