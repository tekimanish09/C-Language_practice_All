#include <stdio.h>

int main()
{
    int a = 9;
    int *b = &a;  // Here 'b' is a pointer as it is storing the value of a in it
    int **c = &b; // Here 'c' is a pointer's ponter as it is storing the value of b which is storing the value a  in it

    printf("The address of a is %p \n", &a);
    printf("The address of b is %p \n", &b);
    printf("The address of c is %p \n", &c);

    printf("The value of a is %d (%p) \n", *(&a), &a);
    printf("The value of b is %d (%p) \n", *(&b), &b);
    printf("The value of c is %d (%p) \n", *(&c), &c);
    return 0;
}