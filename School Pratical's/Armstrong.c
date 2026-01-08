#include <stdio.h>
#include <math.h>
int main()
{
    int number, originalnumber, remainder, digits = 0;
    double sum = 0.0;
    printf("Enter your number to check whether it is a Armstrong number or not: \n");
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
    {
        printf("The number %d is an Armstrong number \n", number);
    }
    else
    {
        printf("The number %d is NOT an Armstrong number \n", number);
    }
    return 0;
}