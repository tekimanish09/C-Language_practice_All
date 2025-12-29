#include <stdio.h>

int main()
{
    int age, num;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your num: ");
    scanf("%d", &num);

    if (age > 10)
    {
        printf("We are inside 'If' statement \n");
        printf("Your age is greater than 10 \n");
    }
    else
    {
        printf("Your age is not greater than 10 \n ");
    }
    if (num > 50)
    {
        printf("We are inside 'If' statement \n");
        printf("Your num is greater than 50 \n");
    }
    else
    {
        printf("Your num is not greater than 50 \n ");
    }
    if (age && num)
    {
        printf("Both age and num are true \n");
    }
    else{
        printf("Any one of age and num is wrong");
    }
}