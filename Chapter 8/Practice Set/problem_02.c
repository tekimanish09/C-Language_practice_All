// Q) Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include <stdio.h>

int main(){
    char arr[100];
    printf("Enter a sentence: \n");
    // scanf("%c",arr);
    scanf("%s",arr);

    printf("This is the line: %s \n",arr);
    return 0;
}