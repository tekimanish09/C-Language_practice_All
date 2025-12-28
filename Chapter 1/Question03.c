#include <stdio.h>

int main()
{
    int principle, time;
    float rate;
    printf("Enter the principle amount: \n");
    scanf("%d", &principle);

    printf("Enter the rate of interest: \n");
    scanf("%f", &rate);
    
    printf("Enter the time (in years): \n");
    scanf("%d", &time);

    printf("The simple interest will be: %f \n", (principle * rate * time) / 100);
    return 0;
}