// Q) Write a program to print the address of a variable. Use this address to get the value of the variable.

 #include <stdio.h>
 
 int main(){
    int a=9;
    printf("The address of the variable 'a' is %p \n",&a);
    printf("The address of the variable 'a' is %p and its value is %d \n",&a,*(&a));
    return 0;
 }