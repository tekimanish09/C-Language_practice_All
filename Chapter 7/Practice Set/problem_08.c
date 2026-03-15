// Q) Repeat problem 7 for a custom input given by the user.

#include <stdio.h>

int main()
{
    int rows, col;

    printf("Enter the number of multiplication tables that you want: \n");
    scanf("%d", &rows);

    printf("Enter the number that till you want the multiplication table (Eg: 10za): \n");
    scanf("%d", &col);

    int arr[rows][col];

    int m = rows;
    int mul[m];

    printf("Enter the %d numbers that you want multiplication tables of:\n", m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &mul[i]);
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    printf(" \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("The value of arr[%d][%d] is %d \n", i, j, arr[i][j]);
        }
        printf(" \n");
    }
    return 0;
}