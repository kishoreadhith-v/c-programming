//syntax of ternary operator: (condition) ? expression1 : expression2

#include <stdio.h>
int main(){
    int n1 = 2, n2 = 5, max;
    max = (n1 > n2) ? n1 : n2;
    printf("Max: %d\n", max);
}