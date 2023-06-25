#include <stdio.h>

void print()
{
    static int i;
    printf("i is %d\n", ++i);
}

void printReg()
{
    register int i;
    printf("i is %d\n", ++i);
}


void print1()
{
    int i = 5;
    printf("i is %d\n", ++i);
}

void test()
{
    static int x;
}

int main()
{
    // test();
    // printf("i is %d\n", x);
    for (int i = 0; i < 10; i++)
    {
        print1();
    }
    printf("------------------\n");

    for (int i = 0; i < 10; i++)
    {
        print();
    }
    
    printReg();}