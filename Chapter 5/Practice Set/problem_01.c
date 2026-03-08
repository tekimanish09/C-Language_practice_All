#include <stdio.h>
float average(int x, int y, int z);

float average(int x, int y, int z)
{
    printf("The average of %d and %d and %d is: \n %.2f \n", x, y, z, (x + y + z) / 3.0);
}

int main()
{
    average(20, 3, 9);
    average(625, 91, 24);
    return 0;
}


/*
#include <stdio.h>
float average(int x, int y, int z);

float average(int x, int y, int z)
{
    return printf("The average of %d and %d and %d is: \n %.2f \n", x, y, z, (x + y + z) / 3.0);
}

int main()
{
    average(20, 3, 9);
    average(625, 91, 24);
    return 0;
}

*/