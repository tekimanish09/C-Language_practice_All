// Q) Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

int count(int a[], int n);

int main()
{
    int arr[10] = {-1, 2, 3, 4, -5, 6, -7, 8, 9, -10};
    int n = 10;
    printf("The number of positive integers are %d \n", count(arr, n));
    
    return 0;
}


int count(int a[], int n)
{
    int no_of_positive_integers = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            no_of_positive_integers++;
        }
    }
    return no_of_positive_integers;
}