// Quick Quiz: Use the library function to calculate the area of a square with side a. 

#include <stdio.h>
#include <math.h>

int main(){
    int side;
    printf("Enter the side of the square: ");
    scanf("%d",&side);
    printf("\n Area of the square is: %.2f",pow(side,2));

    return 0;
}