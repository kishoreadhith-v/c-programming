# 19z205 C Programming - Assignment presentation
## Kishoreadhith V - 22z232 
---
1. Write a recursive function to calculate the power of a given number (x^n), where both x and n are integers.
```c
#include <stdio.h>

int power(int x, int n){
    if (n == 0){
        return 0;
    }
    if (n == 1)
    {
        return x;
    }
    return x*power(x, n-1);    
}

int main(){
    printf("%d\n", power(3, 5));
}
```
2. Implement a function that accepts a string and returns a dynamically allocated array of characters containing the unique characters in the string, sorted in ascending order.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* unique_sort(char* str){
    int len = strlen(str);
    char* unique = (char*)malloc(sizeof(str) + 1);
    int unique_len = 0;
    for (int i = 0; i < len; i++)
    {
        int found = 0;
        for (int j = 0; j < unique_len; j++)
        {
            if (str[i] == unique[j])
            {
                found = 1;
                break;
            }
        }
            if(!found){
                *(unique + unique_len) = str[i];
                unique_len++;
            }
        
    }
    *(unique + unique_len) = '\0';
    // sorting
    for(int i = 0; i < unique_len; i++){
        for(int j = i + 1; j < unique_len; j++){
            if(unique[i] > unique[j]){
                char temp = unique[i];
                unique[i] = unique[j];
                unique[j] = temp;
            }
        }
    }
    return unique;
}

int main(){
    char name[] = "Kishoreadhithaishore";
    printf("%s\n", unique_sort(name));
    return 0;
}
```
3. Write a function that accepts a two-dimensional array of integers and returns the transpose of the
array (rows become columns and vice versa).
```c
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
```
4. Write a function that accepts a string and returns the longest palindrome substring in the string.
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palindrome(char *word, int len) {
    for (int i = 0; i < len / 2; i++) {
        if (*(word + i) != *(word + len - 1 - i)) {
            return 0;
        }
    }
    return 1;
}

char *longestPalindrome(char *s) {
    int len = strlen(s);
    char *longest = (char *)malloc((len + 1) * sizeof(char));
    longest[0] = '\0'; 

    for (int start = 0; start < len; start++) {
        for (int end = start + 1; end <= len; end++) { 
            char *sub = s + start;
            int sublen = end - start;
            if (palindrome(sub, sublen) && sublen > strlen(longest)) {
                strncpy(longest, sub, sublen);
                
            }
        }
    }
    return longest;
}

int main() {
    char name[] = "amadam racecar";
    printf("%s\n", longestPalindrome(name));
    return 0;
}
```
5. Implement a recursive function to solve the Tower of Hanoi problem with n disks, given three
towers.
```c
#include <stdio.h>

void hanoi(int n, char source, char destination, char auxilliary){
    if (n == 1)
    {
        printf("Move disc 1 from peg %c to peg %c\n", source, destination);
        return;
    }
    
    hanoi(n -1, source, auxilliary, destination);
    printf("Move disc %d from peg %c to peg %c\n", n, source, destination);
    hanoi(n -1, auxilliary, destination, source);
}

int main(){
    hanoi(4, 'a', 'b', 'c');
}
```
6. Write a function that accepts a two-dimensional array of integers and returns the largest square
submatrix that consists of only 1s.
```c
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
```
7. Write a function that accepts a pointer to a string and removes all the vowels from the string,
modifying it in-place.
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* remove_vowels(char* str){
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || 
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || 
            str[i] == 'U')
        {
            strncpy(str + i, str + i + 1, len - i);
        }        
    }
    return str;
}

int main(){
    char name[] = "amadam racecar";
    printf("%s\n", remove_vowels(name));
    return 0;
}
```
8. Create a function that accepts two dynamically allocated arrays of integers and merges them into
a new sorted array. The function should return a pointer to the merged array, and it should handle
the deallocation of the input arrays.
```c
#include <stdio.h>
#include <stdlib.h>

int* merge(int* a, int len_a, int* b, int len_b) {
    int* merged = (int*)malloc((len_a + len_b) * sizeof∫);

    for (int i = 0; i < len_a; i++) {
        merged[i] = a[i];
    }
    for (int i = 0; i < len_b; i++) {
        merged[len_a + i] = b[i];
    }

    free(a);
    free(b);

    return merged;
}
int main(){
    int *a = malloc(3 * sizeof(int));
    int *b = malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Enter b[%d]: ", i);
        scanf("%d", &b[i]);
    }
    int *merged = merge(a, 3, b, 3);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", merged[i]);
    }
    free(merged);
    return 0;
}
```
9. Write a function that accepts a pointer to a 2D array of integers and rotates the array 90 degrees
clockwise in-place.
```c
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
```
10. Create a function that accepts a pointer to a 2D array of floating-point numbers and calculates
the average value of each column, storing the results in a dynamically allocated 1D array. The
function should return a pointer to the resulting array.
```c
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
```
