// Write a function that accepts a two-dimensional array of integers and returns the largest square
// submatrix that consists of only 1s.

#include <stdio.h>
#include <stdlib.h>

int unit_check(int ** arr, int row, int col, int size){
    for(int i = row; i < row + size; i++){
        for(int j = col; j < col + size; j++){
            if(arr[i][j] != 1){
                return 0;
            }
        }
    }
    return 1;
}

int * longest_unit_square_matrix(int ** mat, int row, int col){
    int size_limit = row < col ? row : col;
    int * result = (int *)malloc(3 * sizeof(int));
    for(int size = size_limit; size > 0; size--){
        for(int i = 0; i < row - size + 1; i++){
            for(int j = 0; j < col - size + 1; j++){
                if(unit_check(mat, i, j, size)){
                    result[0] = i;
                    result[1] = j;
                    result[2] = size;
                    return result;
                }
            }
        }        
    }
}

int main(){
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    int ** mat = (int **)malloc(row * sizeof(int *));
    for(int i = 0; i < row; i++){
        mat[i] = (int *)malloc(col * sizeof(int));
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    int * result = longest_unit_square_matrix(mat, row, col);
    printf("The largest square submatrix that consists of only 1s is:\n");
    for(int i = result[0]; i < result[0] + result[2]; i++){
        for(int j = result[1]; j < result[1] + result[2]; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}