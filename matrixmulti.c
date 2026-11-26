#include <stdio.h>

#define SIZE 3

int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE], res[SIZE][SIZE];
    int i, j, k;

    printf("Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second 3x3 matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            res[i][j] = 0;
            for (k = 0; k < SIZE; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\nResultant Matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}