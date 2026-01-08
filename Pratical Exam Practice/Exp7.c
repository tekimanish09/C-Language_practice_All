#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d,%d",&num1, &num2);

    if(num1>num2){
        printf("The number %d is greater!!",num1);
    }
    else if(num2>num1){
        printf("The number %d is greater!!",num2);
    }
    else{
        printf("Enter valid numbers!!!!");
    }
    return 0;
}