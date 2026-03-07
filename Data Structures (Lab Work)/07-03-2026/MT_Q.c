#include <stdio.h>

int stk[10];
int top = -1;

int pop();
void push(int);

int main()
{
    int val, n, i;
    int arr[10];

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Push array elements into stack
    for(i = 0; i < n; i++)
    {
        push(arr[i]);
    }

    // Pop elements back into array (reversed)
    for(i = 0; i < n; i++)
    {
        val = pop();
        arr[i] = val;
    }

    printf("The resultant array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void push(int val)
{
    stk[++top] = val;
}

int pop()
{
    return stk[top--];
}