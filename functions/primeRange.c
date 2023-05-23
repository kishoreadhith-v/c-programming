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

int primeRange(int lower, int upper){
    printf("The primes numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i < upper; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }        
    }    
    return 0;
}

int main(){
    int l, u;
    printf("Enter the lower and the upper limits: \n");
    scanf("%d", &l);
    scanf("%d", &u);
    primeRange(l, u);
}