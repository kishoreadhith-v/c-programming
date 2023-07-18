#include <stdio.h>

int main(){
    FILE * file;
    file = fopen("inttest.txt", "w");
    int a = 10, b = 20, c = 30;
    fprintf(file, "%d|%d|%d", a, b, c);
    fclose(file);
    file = fopen("inttest.txt", "r");
    int a1, b1, c1;
    fscanf(file, "%d|%d|%d", &a1, &b1, &c1);
    printf("%d|%d|%d\n", a1, b1, c1);

}