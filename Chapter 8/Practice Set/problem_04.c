// Q)Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.

#include <stdio.h>
#include <string.h>
void slice(char arr[], int a, int b);
void slice(char arr[], int a, int b)
{
    char temp[100];
    int j = 0;

    for (int i = a; i <= b; i++)
    {
        temp[j++] = arr[i];
    }
    temp[j] = '\0';
    strcpy(arr, temp);
}

int main()
{
    char sen[100];
    printf("Enter your sentence here: ");
    fgets(sen, sizeof(sen), stdin);
    int m;
    int n;

    printf("Enter the starting index number: ");
    scanf("%d", &m);
    printf("Enter the ending index number: ");
    scanf("%d", &n);

    slice(sen, m, n);

    printf("%s ", sen);

    return 0;
}