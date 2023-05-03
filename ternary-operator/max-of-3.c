#include <stdio.h>
int main(){
    int n1 = 8, n2 =5, n3 = 7, max;
    max = (n1 > n2) ? (n1 > n3) ? n1 : n3 : (n2 > n3) ? n2 : n3;
    printf("Max: %d\n", max);
}