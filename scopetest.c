#include <stdio.h>

void test();

int main(){
    int i;
    test();
    i++;
    printf("%d\n", i);
    test();
}

int i;
void test()
{
    i++;
    printf("%d\n", i);
}