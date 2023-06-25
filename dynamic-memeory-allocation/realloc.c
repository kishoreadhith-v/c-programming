#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = (int *)calloc(5,sizeof(int));
    printf("Original block of memory: %p\n", p);
    int *s = realloc(p, 10*sizeof(int));
    printf("larger block of memory: %p\n", s);
    int *l = realloc(p, 2*sizeof(int));
    printf("smaller block of memory: %p\n", l);
    printf("---\n");
    printf("original == larger: %d\n", p == s);
    printf("original == smaller: %d\n", p == l);
}