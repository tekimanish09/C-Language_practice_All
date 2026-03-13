#include <stdio.h>
void swap(int*, int*);
void swap(int* a, int* b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

/*
In plain terms:
*a means “go to the thing a points to”
&a means “give me the address of a”
*/
int main()
{
    int a = 4;
    int b = 5;
    printf("The un-swapped values are %d and %d\n", a, b);
    swap(&a, &b);
    printf("The swapped values are %d and %d\n", a, b);
    return 0;
}