// Q) Write a program containing a function which reverses the array passed to it.   ☆ ☆ ☆ ☆ ☆

#include <stdio.h>

void reverse(int a[], int n);
void printarray(int a[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    printarray(arr, n);
    reverse(arr, n);        printf(" \n");
    printarray(arr, n);

    return 0;
}

void reverse(int a[], int n)
{
    int temp;

    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

void printarray(int a[], int n)
{
    printf("The array is:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

/*
Swapping Logic/Algorithm used here:

temp=a;
a=b;
b=temp;
*/