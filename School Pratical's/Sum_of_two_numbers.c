#include <stdio.h>

int main(){
    int value1, value2;
    printf("Enter your values: \n");
    scanf("%d, %d",&value1, &value2);
    printf("The sum of the numbers %d and %d will be: \n %d", value1,value2, (value1+value2) );
    return 0;
}