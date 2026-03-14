#include <stdio.h>

int main()
{
    int m;
    printf("Enter the array size: ");
    scanf("%d",&m);

    int marks[m];
    printf("Enter the marks of m students: \n");
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("The values at index %d is %d \n", i, marks[i]);
    }

    // printf("The marks are:\n %d %d %d %d %d ", marks[0], marks[1], marks[2], marks[3], marks[4]);

    return 0;
}