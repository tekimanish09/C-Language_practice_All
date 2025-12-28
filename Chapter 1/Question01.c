// #include <stdio.h>

// int main(){
//     int length = 5;
//     int breadth = 10;
//     printf("The area of this triange is %d", length * breadth);
//     return 0;
// }

#include <stdio.h>

int main(){
    int length, breadth;
    printf("Enter length of a rectangle: \n");
    scanf("%d", &length);

    printf("Enter breadth of a rectangle: \n");
    scanf("%d", &breadth);

    printf("The area of this rectangle is %d", length * breadth);
    return 0;
}