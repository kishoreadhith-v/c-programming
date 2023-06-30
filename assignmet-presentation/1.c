// Write a recursive function to calculate the power of a given number (x^n), where both x and n are integers.

#include <stdio.h>

int power(int x, int n){
    if (n == 0){
        return 0;
    }
    if (n == 1)
    {
        return x;
    }
    return x*power(x, n-1);    
}

int main(){
    printf("%d\n", power(3, 5));
}