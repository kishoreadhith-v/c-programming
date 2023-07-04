#include <stdio.h>

int main(){
    FILE * file;
    file = fopen("test.txt", "w");
    char ch[100];
    scanf("%[^;]s", ch);
    fputs(ch, file);
    fclose(file);
    // reading
    char c;
    file = fopen("test.txt", "r");
    c = fgetc(file);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(file);
    }
    printf("\n---\n");   
    fclose(file);
}