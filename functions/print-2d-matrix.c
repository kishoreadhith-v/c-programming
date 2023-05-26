#include <stdio.h>

void printMatrix(int mat[][3], int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++){
            printf("%d | ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[][3] = {1,2,3,4,5, 567, 567,8, 56,78,8};
    int rows = sizeof(mat)/sizeof(mat[0]);
    int cols = sizeof(mat[0])/sizeof(mat[0][0]);
    printMatrix(mat, rows, cols);
}