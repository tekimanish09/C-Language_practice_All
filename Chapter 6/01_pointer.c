#include <stdio.h>

int main()
{
    int in = 69;
    int *jn = &in;
    printf("The address of i is %p \n", &in);
    printf("The address of i is %p \n", jn);
    printf("The address of j is %p \n\n", &jn);

    printf("The address is %p and the value of i is %d \n", &in, *(&in));
    printf("The address is %p and the value of i is %d \n", jn, *(jn));
    printf("The address is %p and the value of j is %d \n", &jn, *(&jn));
    return 0;
}