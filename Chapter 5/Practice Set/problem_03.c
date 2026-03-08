// Q) Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2. 

#include <stdio.h>
float force_of_attraction(float);
float force_of_attraction(float m)
{
    printf("The  force of attraction on a body of mass %.2f exerted by earth is %.2f", m, (m * 9.8));
}

int main()
{
    force_of_attraction(20);
    return 0;
}