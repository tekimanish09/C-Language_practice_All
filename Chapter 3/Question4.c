#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("This is a LEAP YEAR!!");
    }
    else
    {
        printf("This is NOT a LEAP YEAR!");
    }
    return 0;
}