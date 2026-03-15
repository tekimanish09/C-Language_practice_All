// Q)Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.

#include <stdio.h>
#include <string.h>

void slice(char str[], int m, int n);
void slice(char str[], int m, int n)
{
    int j = 0;
    char temp[100];

    for (int i = m; i <= n; i++)
    {
        temp[j] = str[i];
        j++;
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

int main()
{
    char sen[100];
    printf("Enter your sentence here: ");
    fgets(sen, sizeof(sen), stdin);     // fgets(destination_array, max_characters, input_source);
    int m; // For index first value
    int n; // For last first value

    printf("Enter index first value here: ");
    scanf("%d", &m);
    printf("Enter index last value here: ");
    scanf("%d", &n);

    slice(sen, m, n);

    printf("%s \n", sen);

    return 0;
}