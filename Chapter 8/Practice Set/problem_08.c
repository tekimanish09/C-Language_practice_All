// Q) Write a program to count the occurrence of a given character in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "Hellooo";
    char find = 'l';
    int count=0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == find)
        {
            count++;
        }
    }
    printf("In the string %s there are '%c', %d times.", arr, find, count);
    return 0;
}