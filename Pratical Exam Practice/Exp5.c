#include <stdio.h>
int main()
{
    int principle, time;
    float rate, si;
    printf("Enter the Principle amount: \n");
    scanf("%d", &principle);
    printf("Enter the Rate amount: \n");
    scanf("%f", &rate);
    printf("Enter the Time in Years: \n");
    scanf("%d", &time);

    si = (principle * rate * time) / 100;

    printf("The Simple Interest is %.2f", si);
    return 0;
}