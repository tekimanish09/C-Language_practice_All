#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is empty*/
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

/* Check if the stack is full*/
int isfull()
{
    if (top == MAXSIZE)
        return 1;
    else
        return 0;
}
int peek()
{
    return stack[top];
}
int pop()
{
    int data;
    if (!isempty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("Coundn't retrieve the data, Stack is empty. \n");
    }
}
int push(int data)
{
    if (!isfull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("Coundn't insert the data, Stack is full. \n");
    }
}

int main()
{
    push(44);
    push(10);
    push(62);
    push(123);
    push(15);
    printf("Element at top of the stack: %d \n", peek());
    printf("Elements: \n");
    while (!isempty())
    {
        int data = pop();
        printf("%d\n", data);
    }
    printf("Stack is Full: %s\n", isfull() ? "true" : "false");
    printf("Stack is Empty: %s\n", isempty() ? "true" : "false");
    return 0;
}
