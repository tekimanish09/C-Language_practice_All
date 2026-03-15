#include <stdio.h>

int main()
{
    int arr[3][2];      // rows then columns

    for (int i = 0; i < 3; i++)     // rows
    {
        for (int j = 0; j < 2; j++)     //columns
        {
            printf("Enter the value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("The value of arr[%d][%d] is %d \n", i, j,arr[i][j]);
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}