// Q) Reverse the array

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int temp;

    printf("The Unreversed array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" \n");
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("The Reversed array is:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}