#include <stdio.h>

int main() {
    int row, col, i, j;

    printf("Enter the number of rows: \n");
    scanf("%d", &row);

    printf("Enter the number of cols: \n");
    scanf("%d", &col);

    int a[row][col];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            a[i][j] = i * col + j;
        }
    }

    printf("Element \t Value \t Address \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d] \t %d \t %p \n", i, j, a[i][j], (void*)&a[i][j]);
        }
    }

    return 0;
}
