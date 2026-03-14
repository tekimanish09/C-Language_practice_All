// Q) Write a C program that asks the user for the size of an array, takes integer inputs for each element, stores them in the array, and then prints all the elements of the array.

#include <stdio.h>

int main()
{
    int num = 0;

    printf("Enter your array size: ");
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter your value of index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The array is: \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}