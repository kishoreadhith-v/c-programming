#include <stdio.h>
#include <stdbool.h>
bool isFactor(int n, int x){
    return n % x ==0;
}

bool isPrime(int n){
    for (int i = 2; i < (n/2)+1; i++)
    {
        if (isFactor(n, i))
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    // printf("%d\n", isPrime(n));
    isPrime(n) ? printf("\U0001F44D\n") : printf("\U0001F44E\n");
}