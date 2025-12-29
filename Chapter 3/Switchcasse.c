#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("The value is 1 \n");
        break;
    case 2:
        printf("The value is 2 \n");
        break;
    case 3:
        printf("The value is 3 \n");
        break;
    case 4:
        printf("The value is 4 \n");
        break;
    defalut:
        printf("Nothing \n");
        break;
    }
    return 0;
}