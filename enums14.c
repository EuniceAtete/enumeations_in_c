#include <stdio.h>
 
enum { ROWS = 3, COLS = 4 };
 
 
void fillMatrix(int matrix[ROWS][COLS]) {
    int i, j, value = 1;
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            matrix[i][j] = value++;
}
 
void printMatrix(int matrix[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++)
            printf("%3d ", matrix[i][j]);
        printf("\n");
    }
}
 
int main() {
    int matrix[ROWS][COLS];
    printf("Matrix Dimensions: 3 Rows and 4 Columns\n");
    fillMatrix(matrix);
    printf("\nMatrix:\n");
    printMatrix(matrix);
    return 0;
}