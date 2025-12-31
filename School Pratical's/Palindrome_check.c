#include <stdio.h>

int main()
{
    int number, original, reverse = 0, remainder;
    printf("Enter your number to check if its a palindrome or not:\n");
    scanf("%d", &number);
    original = number;

    while(number!=0){
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }
    if(reverse==original){
        printf("The number %d is palindrome! \n", original);
    }
    else{
        printf("The number %d is not palindrome! \n", original);
        }
    return 0;
}