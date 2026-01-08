#include <stdio.h>
int main(){
    float cel, work;
    printf("Enter the Centigrade: \n");
    scanf("%f",&cel);
    work=cel*(9.0/5.0)+32;
    printf("The Farenheight is %.2f \n", work);
    return 0;
}