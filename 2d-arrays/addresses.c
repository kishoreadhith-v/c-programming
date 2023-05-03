#include <stdio.h>
int main(){
    int x[3][100];
    printf("%p\n", &x);
    printf("%p\n", &x[0]);
    printf("%p\n", &x[0][0]);
    printf("%p\n", &x[1]);
    printf("%p\n", x);
    printf("%p\n", x);
    return 0;
}