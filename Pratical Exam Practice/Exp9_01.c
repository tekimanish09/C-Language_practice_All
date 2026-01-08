#include <stdio.h>
int main(){
    int num, original,reverse=0,remainder;
    printf("Enter your Number: \n");
    scanf("%d",&num);
    original=num;

    while(num!=0){
    remainder=num%10;
    reverse=reverse*10+remainder;
    num=num/10;
    }
    if(original==reverse){
        printf("The number %d is a Palindrome!!", original);
    }
    else{
        printf("The number %d is NOT a Palindrome!!", original);
    }
    return 0;
}