#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first numbers: \n");
    scanf("%d", &a);
    printf("Enter second numbers: \n");
    scanf("%d", &b);
    printf("Enter third numbers: \n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("The number %d is the greatest among all!!", a);
    }
    else if (b > a && b > c)
    {
        printf("The number %d is the greatest among all!!", b);
    }
    else if(c > a && c > b)
    {
        printf("The number %d is the greatest among all!!", c);
    }
    return 0;
}