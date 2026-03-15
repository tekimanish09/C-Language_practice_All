// Q) Write a program to count the occurrence of a given character in a string.

#include <stdio.h>
#include <string.h>

int strnum(char arr[], char x);
int strnum(char arr[], char x)
{
    int count = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char arr[100];


    printf("Enter your sentence here: ");
    scanf("%s", arr);

    char find;
    printf("Enter the character to be found: ");
    scanf(" %c", &find);

    printf("The character '%c' is %d number of times.",find, strnum(arr, find));
    return 0;
}