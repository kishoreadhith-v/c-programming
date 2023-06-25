#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *)calloc(5,sizeof(int));
    for (int i = 0; i < 5; i++)
    {
       *(p+i) = i*3;
        // scanf("%d", p+i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", p[i]);
    }
    
}