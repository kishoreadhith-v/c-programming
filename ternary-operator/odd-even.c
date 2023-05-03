#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    (n%2) ? printf("%d is odd\n", n) : printf("%d is even\n", n);
}