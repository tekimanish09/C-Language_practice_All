#include <stdio.h>

int main()
{
    float num1, num2;
    char op;
    printf("Enter the first number: \n");
    scanf("%f", &num1);
    printf("Enter the second number: \n");
    scanf("%f", &num2);
    printf("Enter the operator (+,-,/,*): \n");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Result= %.2f", num1 + num2);
        break;
    case '-':
        printf("Result= %.2f", num1 - num2);
        break;
    case '*':
        printf("Result= %.2f", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("Result= %.2f", num1 / num2);
        }
        else
        {
            printf("Error: division by 0 is not allowed \n");
        }
        break;
    default:
        printf("Invalid Operator!!");
    }
    return 0;
}