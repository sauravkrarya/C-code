#include<stdio.h>
int main();
    int matrixSum(int rows, int columns, int **matrix) {
    int i, j, sum = 0;
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            sum += matrix[i][j];
    return sum;
}