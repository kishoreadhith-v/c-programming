// Create a function that accepts two dynamically allocated arrays of integers and merges them into
// a new sorted array. The function should return a pointer to the merged array, and it should handle
// the deallocation of the input arrays.

#include <stdio.h>
#include <stdlib.h>

int* merge(int* a, int len_a, int* b, int len_b) {
    int* merged = (int*)malloc((len_a + len_b) * sizeof(int));

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