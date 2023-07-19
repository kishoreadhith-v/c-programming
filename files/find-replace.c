#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int replace(char input_path[], char output_path[], char target[], char replacement[]) {
    int count = 0;
    FILE * file = fopen(input_path, "r");
    if (inf == NULL) {
        printf("Error opening input file\n");
        return -1;
    }
    char ** lines = (char **)malloc(n * sizeof(char **));
    int line_count = 0;
    lines[0] = (char *) malloc(300 * sizeof(char));
    while (fgets(lines[line_count], 300, file))
    {
        lines[line_count + 1] = (char *) malloc(300 * sizeof(char));
        line_count++;
    }    

    FILE *of = fopen(output_path, "w");

    for(int i =)

    fclose(inf);
    fclose(of);
    free(word);

    return count;
}

int main() {
    char input_path[] = "replace_test.txt";
    char output_path[] = "replace_op.txt";
    char target[] = "Never";
    char replacement[] = "Always";
    int count = replace(input_path, output_path, target, replacement);
    printf("Number of replacements: %d\n", count);

    return 0;
}
