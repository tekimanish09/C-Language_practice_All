#include <stdio.h>
int main(){
    float base, height, area;
    printf("Enter the base of the Traingle: \n");
    scanf("%f",&base);
    printf("Enter the height of the Traingle: \n");
    scanf("%f",&height);

    area=(1.0/2.0)*base*height;

    printf("The area of Triangle is %.2f",area);
    return 0;
}