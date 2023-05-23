#include <stdio.h>
#include <stdbool.h>
bool isFactor(int, int);
int main(){
    int n, x;
    printf("Enter the number and the divisor\n");
    scanf("%d", &n);
    scanf("%d", &x);
    printf("%d\n", isFactor(12, 4));
}
bool isFactor(int n, int x){
    return n % x ==0;
}