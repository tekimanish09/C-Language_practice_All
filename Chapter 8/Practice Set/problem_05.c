// Q) Write your own version of strcpy function from <string.h>

#include <stdio.h>
#include <string.h>

int mystlen(char str[]);
int mystlen(char str[])
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

void mystr(char target[], char source[]);
void mystr(char target[], char source[])
{
    for (int i = 0; i < mystlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystlen(source)] = '\0';
}

int main()
{
    char source[] = "Manish is here you bitchess!!";
    char target[100];
    mystr(target, source);
    printf("%s \n %s", source, target);

    return 0;
}