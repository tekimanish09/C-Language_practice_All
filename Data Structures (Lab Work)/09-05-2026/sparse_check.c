#include <stdio.h>

int main()
{
    int mtx[3][3];
    int zerocount = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value for index [%d][%d]: ", i, j);
            scanf("%d", &mtx[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mtx[i][j] == 0)
            {
                zerocount++;
            }
        }
    }

    printf("\n\nThe matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", mtx[i][j]);
        }
        printf("\n");
    }

    if (zerocount > 4)
    {
        printf("This is a Sparse matrix \n");
    }
    else
    {
        printf("This is a NOT a Sparse matrix \n");
    }

    return 0;
}