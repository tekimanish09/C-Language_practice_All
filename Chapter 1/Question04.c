#include <stdio.h>

int main()
{
    float cel;
    printf("Enter the Celsius: \n");
    scanf("%f", &cel);
    printf("The converted Farenight wil be: %.2f", cel * (9.0 / 5.0) + 32.0);
    return 0;
}