#include <stdio.h>

int main()
{
    int pass;
    int count = 0;
    printf("Enter your password: ");
    scanf("%d", &pass);

    for (int i = 0; i < 99999; i++)
    {
        if (pass != i)
        {
            count++;
        }
        else
        {
            printf("The password is: %d \n", count);
            break;
        }
    }
    return 0;
}