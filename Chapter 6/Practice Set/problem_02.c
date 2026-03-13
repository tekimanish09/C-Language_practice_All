// Q) Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?

 #include <stdio.h>
 void change(int*);
 void change(int* x){
    *x=*x;
 }
 int main(){
    int i=31;
    printf("The address of the variable 'i' is %p \n",&i);
    change(&i);
    printf("The address of the variable 'i' is %p and its value is %d \n",&i,*(&i));
    return 0;
 }