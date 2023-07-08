#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(char *array[], int line) {
    int swapped;
    for (int i = 0; i < line; i++) {
        swapped = 0;
        for (int j = 0; j < line - i - 1; j++) {
            if (strcmp(array[j], array[j + 1]) > 0) {
                swap(&array[j], &array[j + 1]);
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}


void sort_lines(char * input_path, char * output_path, int n){
    FILE * file = fopen(input_path, "r");
    char ** lines = (char **)malloc(n * sizeof(char **));
    int line_count = 0;
    lines[0] = (char *) malloc(300 * sizeof(char));
    while (fgets(lines[line_count], 300, file))
    {
        lines[line_count + 1] = (char *) malloc(300 * sizeof(char));
        line_count++;
    }
    sort_array(lines, line_count);
    fclose(file);
    file = fopen(output_path, "w");
    for (int i = 0; i < line_count; i++)
    {
        fputs(lines[i], file);
    }
}

int main(){
    sort_lines("sort_test.txt", "sort_op.txt", 6);
}