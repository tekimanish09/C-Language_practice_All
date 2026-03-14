// Q) Repeat problem 3 for a general input provided by the user using scanf.

#include <stdio.h>

int main()
{

    int num;
    printf("Enter the number you want to multiply with: ");
    scanf("%d", &num);

    int size = 10;
    // printf("Enter the size of array: ");
    // scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = num * (i + 1);
    }

    for (int i = 0; i < size; i++)
    {
        printf("The value of %d X %d = %d \n", num, (i + 1), arr[i]);
    }
    return 0;
}