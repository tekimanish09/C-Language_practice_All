#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("The alphabet is a Lowercase", ch);
    }
    else{
        printf("Not a lowercse character");
    }
    // printf("The character is %c \n",ch);
    // printf("The value of character is %d \n",ch);
    return 0;
}