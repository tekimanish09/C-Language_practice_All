// Q) Write a program to encrypt a string by adding 1 to the ascii value of its characters.

#include <stdio.h>
#include <string.h>

void encryption(char arr[]);
void encryption(char arr[])
{
    for (int i = 0; i < strlen(arr); i++)
    {
        arr[i] = arr[i] + 1;
    }
}

int main()
{
    char arr[] = "Manish just be who you are understand!!";
    encryption(arr);
    printf("%s", arr);
    return 0;
}