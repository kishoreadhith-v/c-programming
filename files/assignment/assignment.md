# Files assignment
## Kishoreadhith V - 22z232

1. Read a file and sort the lines alphabetically

```c
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
```

2. Encrypt a file using a simple encryption algoritm - here XOR operator is used. 
The XOR operator can be used in both ways of the encryption as long as the same key is used.

```c
#include <stdio.h>
#include <stdlib.h>


void encrypt(char * input_path, char * output_path, int key){
    FILE * fr = fopen(input_path, "r");
    FILE * fw = fopen(output_path, "w");
    char c;
    while ((c = fgetc(fr)) != EOF)
    {
        fputc(c ^ key, fw);
    }
    fclose(fr);    
    fclose(fw);    
}

int main(){
    char * ip = "encrypt_test.txt";
    char * eop = "encrypt_output.txt";
    char * dop = "decrypt_output.txt";
    encrypt(ip, eop, 2);
    printf("done\n");
    encrypt(eop, dop, 2);
    printf("done\n");
}
```

3. Read a file and find the average of the numbers in the file.

```c
#include <stdio.h>
#include <stdlib.h>

float file_avg(FILE * file){
    int sum = 0, count = 0;
    char str[15];
    while (fgets(str, 15, file))
    {
        sum += atoi(str);
        count++;
    }
    return sum/(float)count;
}

int main(){
    FILE * fp = fopen("avg_test.txt", "r");
    printf("%f", file_avg(fp));
}
```