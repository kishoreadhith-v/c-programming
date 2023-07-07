// Write a function that accepts a pointer to a 2D array of integers and rotates the array 90 degrees
// clockwise in-place.

#include <stdio.h>
#include <stdlib.h>

int ** rotate(int ** arr, int rows, int cols){
    int ** res = (int **) malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++)
    {
        res[i] = (int *) malloc(rows * sizeof(int));
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            res[j][rows - i - 1] = arr[i][j];
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


temp = i j
i j =  i r - j
i r-j = c-i r-j
c-i r-j = c-i j
c-i j = temp