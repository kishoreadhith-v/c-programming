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
    
    // while(fgets(ch, 100, file) != NULL)
    // {printf("%s",ch);}
    // printf("\n---\n");   
    // fclose(file);
    // printf("the current position of the file pointer is %d", ftell(file));
    fseek(file, -10, 2);
    c = fgetc(file);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(file);
    }
}