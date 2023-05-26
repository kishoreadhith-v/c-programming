#include <stdio.h>

int factorial(int n){
    if (n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

// tracing for the function factorial
// factorial(5)
// 5 * factorial(4)


int main(){
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));
}

// tracing for the function call factorial(5) with line numbers and return values
// factorial(5) -> 5 * factorial(4) -> 5 * 4 * factorial(3) -> 5 * 4 * 3 * factorial(2) -> 5 * 4 * 3 * 2 * factorial(1) -> 5 * 4 * 3 * 2 * 1
