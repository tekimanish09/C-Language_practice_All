#include <stdio.h>

int main()
{
    int cgpa[3] = {3, 6, 9};
    for (int i = 0; i < 3; i++)
    {
        printf("The values at index %d is %d || The address of index %d is %p \n", i, cgpa[i], i, (void*)&cgpa[i]);
        // printf("The address of index %d is %p \n", i,&cgpa[i]);
    }
    // printf("The address of index 0 is %p", &cgpa[0]);
    return 0;
}

// Because %p expects a void pointer.