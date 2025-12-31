#include <stdio.h>

int main()
{
    int num, original, reverse = 0, remainder;
    printf("Enter your number: \n");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    if (reverse == original)
    {
        printf("The number %d is a palindrome number!! \n", original);
    }
    else
    {
        printf("The number %d is not a palindrome number!! \n", original);
    }
    return 0;
}