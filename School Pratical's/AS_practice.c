#include <stdio.h>
#include <math.h>

int main()
{
    int number, originalnumber, remainder, digits = 0;
    double sum = 0.0;
    printf("Enter your number: ");
    scanf("%d", &number);
    originalnumber = number;
    while (originalnumber != 0)
    {
        originalnumber /= 10;
        digits++;
    }
    originalnumber = number;
    while (originalnumber != 0)
    {
        remainder = originalnumber % 10;
        sum += pow(remainder, digits);
        originalnumber /= 10;
    }
    if ((int)round(sum) == number)
        printf("%d is an Armstrong number\n", number);
    else
        printf("%d is not an Armstrong number\n", number);

    return 0;
}
