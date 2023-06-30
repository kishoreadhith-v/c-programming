// Write a function that accepts a two-dimensional array of integers and returns the transpose of the
// array (rows become columns and vice versa).

# include <stdio.h>
# include <stdlib.h>

int ** transpose( int ** mat, int rows, int columns){
    int ** res = (int **)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
    {
        res[i] = (int*)malloc(columns * sizeof(int));
        for (int j = 0; j < columns; j++)
        {
            res[i][j] = mat[j][i];
        }        
    }
    return res;
}


int main(){
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int **tr;
    tr = transpose((int **)a,3,3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", tr[i][j]);
        }
        printf("\n");
    }
}