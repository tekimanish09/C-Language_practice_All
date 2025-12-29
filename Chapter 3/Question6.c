#include <stdio.h>

int main()
{
    int number1, number2, number3, number4;
    printf("Enter the values: \n");
    scanf("%d, %d, %d, %d", &number1, &number2, &number3, &number4);

    if (number1 > number2 && number1 > number3 && number1 > number4)
    {
        printf("Number 1 '%d' is the greatest!!", number1);
    }
    if (number2 > number1 && number2 > number3 && number2 > number4)
    {
        printf("Number 2 '%d' is the greatest!!", number2);
    }
    if (number3 > number2 && number3 > number1 && number3 > number4)
    {
        printf("Number 3 '%d' is the greatest!!", number3);
    }
    if (number4 > number2 && number4 > number3 && number4 > number1)
    {
        printf("Number 4 '%d' is the greatest!!", number4);
    }
    return 0;
}