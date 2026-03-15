// Q) Write a program to check whether a given character is present in a string or not.

#include <stdio.h>
#include <string.h>

int strnum(char arr[], char x);
int strnum(char arr[], char x)
{
    // int count = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == x)
        {
            printf("Yes %c is Present \n", x);
            return 1;
        }
    }
    printf("No %c is not Present \n", x);
    return 0;
}

int main()
{
    char arr[100];

    printf("Enter your sentence here: ");
    scanf("%s", arr);

    char find;
    printf("Enter the character to be found: ");
    scanf(" %c", &find);

    strnum(arr, find);

    // printf("The character '%c' is %d number of times.", find, strnum(arr, find));
    return 0;
}