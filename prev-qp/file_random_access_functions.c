// Demonstrate the use of the file random access functions ftell(), fseek() and rewind() in a single meaninfuful program. 

#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Read the content of the file
    printf("Content of the file:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Get the current file position using ftell()
    long position = ftell(file);
    printf("\nCurrent position in the file: %ld\n", position);

    // Move the file pointer to a specific position using fseek()
    fseek(file, 5, SEEK_SET);  // Move 5 bytes forward from the beginning of the file

    // Read and print the content from the new position
    printf("Content from the new position:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Get the current file position again
    position = ftell(file);
    printf("\nCurrent position in the file: %ld\n", position);

    // Move the file pointer to the beginning of the file using rewind()
    rewind(file);

    // Read and print the content from the beginning of the file
    printf("Content from the beginning of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
