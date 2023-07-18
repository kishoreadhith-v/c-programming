#include <stdio.h>

int fibo(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
    
}

int main(){
    FILE * file = fopen("fibo.txt","w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(file, "%d\n", fibo(i));
    }
    fclose(file);
    file = fopen("fibo.txt", "r");
    if(file == NULL){
        printf("File not found\n");
        return 1;
    }
    int n;
    while (fscanf(file, "%d", &n) != EOF)
    {
        printf("%d\n", n);
    }
}