#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int zeroCount = 0;

    printf("Enter 9 elements for the 3x3 matrix:\n");
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    if(zeroCount > (3 * 3) / 2) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}