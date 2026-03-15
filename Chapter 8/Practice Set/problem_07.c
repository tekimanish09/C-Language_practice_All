// Q) Write a program to encrypt a string by adding 1 to the ascii value of its characters.

#include <stdio.h>
#include <string.h>

void encryption(char arr[], int x);
void dencryption(char arr[], int x);

void encryption(char arr[], int x)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        arr[i] = arr[i] - x;
    }
}

void dencryption(char arr[], int x)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        arr[i] = arr[i] + x;
    }
}

int main()
{
    int key = 7; // Encryption key/value
    char arr[] = "Manish just be who you are understand!!";
    encryption(arr, key);
    printf("%s", arr);

    printf(" \n");

    dencryption(arr, key);
    printf("%s", arr);
    return 0;
}