#include <stdio.h>

int main()
{
    char str[] = {'M', 'A', 'N', 'I', 'S', 'H', '\0'};

    for (int i = 0; i < 6; i++)
    {
        printf("%c --> %p \n", *(str + i), &str[i]); // *(str+i) == str[i]
    }
    return 0;
}