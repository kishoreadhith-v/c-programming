// Write a function that accepts a two-dimensional array of integers and returns the transpose of the
// array (rows become columns and vice versa).

#include <stdio.h>
#include <stdlib.h>

int ** rotate(int ** arr, int rows, int cols){
    int ** res = (int **) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        res[i] = (int *) malloc(cols * sizeof(int));
    }
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            res[j][i] = arr[i][j];
        }
    }
    return res;
}

int main(){
    int rows, cols;
    printf("Enter the number of rows and columns separated by spaces: ");
    scanf("%d %d", &rows, &cols);

    int ** arr = (int **) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *) malloc(cols * sizeof(int));
    }

    printf("Enter the elements of the array separated by spaces:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int ** res = rotate(arr, rows, cols);
    printf("The rotated array is:\n");
    for (int i = 0; i < cols; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < rows; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}