// Create a function that accepts a pointer to a 2D array of floating-point numbers and calculates
// the average value of each column, storing the results in a dynamically allocated 1D array. The
// function should return a pointer to the resulting array.

#include <stdio.h>
#include <stdlib.h>

float* avg(float** arr, int rows, int cols) {
    float* res = malloc(cols * sizeof(float));

    for (int i = 0; i < cols; i++) {
        float sum = 0;
        for (int j = 0; j < rows; j++) {
            sum += arr[j][i];
        }
        res[i] = sum / rows;
    }

    return res;
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns separated by spaces: ");
    scanf("%d %d", &rows, &cols);

    float** arr = malloc(rows * sizeof(float*));
    for (int i = 0; i < rows; i++) {
        arr[i] = malloc(cols * sizeof(float));
    }

    printf("Enter the elements of the array separated by spaces:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%f", &arr[i][j]);
        }
    }

    float* res = avg(arr, rows, cols);
    printf("The average of each column is:\n");
    for (int i = 0; i < cols; i++) {
        printf("Column %d: %f\n", i + 1, res[i]);
    }

    return 0;
}