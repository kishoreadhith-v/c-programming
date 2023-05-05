#include <stdio.h>
int main(){
    char x[100];
    scanf("%[^/*-+]", x);
    printf("%s\n", x);
}