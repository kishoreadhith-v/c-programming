#include <stdio.h>
int main(){
    int n, copy, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    copy = n;
    while(copy > 0){
        sum += (copy % 10);
        copy /= 10;
    }
    printf("Sum of digits of the number %d is %d\n", n, sum);
    return 0;
}