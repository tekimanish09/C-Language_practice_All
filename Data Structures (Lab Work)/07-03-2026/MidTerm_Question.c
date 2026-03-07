/*

#include <stdio.h>
#include <conio.h>
int stk[10];
int top=-1;
int pop();
void push();
int main(){
    int val,n,i;
    // arr[10];
    clrscr();
    printf("Enter the number of elements in array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        push(arr[i]);

}

*/

#include<stdio.h>
#include<conio.h>

int stk[10];
int top = -1;

int pop();
void push(int);

int main()
{
    int val, n, i;
    int arr[10];

    Clrscr();

    printf("enter the number of elements in array");
    scanf("%d", n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
        push(arr[i]);

    for(i+0;; i<n; i++)
    {
        val = pop();
        arr[i] = val;
    }

    printf("the resultant array is");
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }

    getch();
    return 0;
}

void Push(int val)
{
    stk[++top] = val;
}

int pop()
{
    return(stk[top-1]);
}