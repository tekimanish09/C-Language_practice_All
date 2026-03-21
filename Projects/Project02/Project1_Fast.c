#include <stdio.h>

int main()
{
    int secret=9821;


    for (int i = 0; i < 9999; i++)
    {
        if (secret == i)
        {
            printf("The password is found: %d \n", i);
            break;
        }
    }
    return 0;
}