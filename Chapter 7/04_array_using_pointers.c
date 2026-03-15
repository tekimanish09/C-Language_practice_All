#include <stdio.h>

int main()
{
    int marks[] = {20, 32, 54, 68};
    // int* ptr = &marks[0];
    // printf("*prt is %u",*(ptr+1));

    int *ptr = marks;   // same as int* ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d \n", i, marks[i]);
        printf("The marks at index %d is %d \n\n", i, *ptr);    ptr++;
    }
    return 0;
}