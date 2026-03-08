#include <stdio.h>
float temp(float);

float temp(float c)
{
    printf("%.2f Celcius to Farenheight is %.2f \n", c, (9 / 5) * c + 32);
}

int main()
{
    temp(0);
    temp(100);
    temp(25);
    return 0;
}