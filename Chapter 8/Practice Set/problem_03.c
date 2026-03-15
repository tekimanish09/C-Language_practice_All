// Q) Write your own version of strlen function from <string.h>

#include <stdio.h>

int stlen(char str[]);
int stlen(char str[])
{
    int i = 0;
    int count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i++];
    }
    count = i - 1;
    return count;
}

int main()
{
    char str[] = "Hello World";

    printf("%d", stlen(str));
    return 0;
}