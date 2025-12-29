#include <stdio.h>

int main()
{
    int income, tax = 0;
    printf("Enter your income: \n");
    scanf("%d", &income);

    if (income < 250000)
    {
        tax = 0;
    }
    else if (income > 250000 && income < 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income < 100000)
    {
        tax = 0.20 * (500000 - 250000) + 0.05 * (income - 500000);
    }
    else
    {
        tax = 0.30 * (100000 - 500000) + 0.20 * (500000 - 250000) + 0.05 * (income - 100000);
    }
    printf("The total tax needed to pay: %d \n", tax);
    return 0;
}