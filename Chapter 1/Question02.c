#include <stdio.h>

int main()
{
    float radius, height;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: \n");
    scanf("%f", &height);

    printf("The volume of the cylinder is %.3f \n", 3.14 * radius * radius * height);
    printf("The area of the circle is %.2f \n", 3.14 * radius * radius);
    return 0;
}