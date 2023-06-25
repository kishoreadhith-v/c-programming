// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char a[100], b[100];
    gets(a);
    strcpy(b, a);
    puts(a);
    puts(b);
    return 0;
}