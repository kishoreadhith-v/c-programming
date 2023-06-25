#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapPtr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2, b = 5;
    swap(a, b);
    printf("a: %d, b: %d\n", a, b);
    swapPtr(&a, &b);
    printf("a: %d, b: %d\n", a, b);
}