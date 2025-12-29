#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 10)
    {
        printf("We are inside 'If' statement \n");
        printf("Your age is greater than 10 \n");
    }
     if (age%5 == 0)
    {
        printf("We are inside another 'If' statement \n");
        printf("Your age is divisible by 5 \n");
    }

    return 0;
}