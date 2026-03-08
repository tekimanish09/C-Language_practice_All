#include <stdio.h>
int factorial(int);
int factorial(int x){
    if(x == 1 || x == 0){
        return 1;
    }
    return factorial(x-1)*x;
}

int main(){
    int a;
    printf("Enter your number to do factorial: ");
    scanf("%d",&a);
    printf("The factorial of %d is %d",a,factorial(a));
    return 0;
}