#include <stdio.h>

int main(){
    int x = 15;
    int *ptr = &x;
    printf("%d\n", x);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);


    float y = 15.6;
    float *ptry = &y;
    printf("%f\n", y);
    printf("%p\n", ptry);
    printf("%f\n", *ptry);
    
    float f = 1.6, *ptrf = &f;
    printf("%f\n", f);
    printf("%p\n", ptrf);
    printf("%f\n", *ptrf);

    printf("\nValue: %f : %f\n", f, *ptrf);
    printf("Address: %p : %p\n", &f, ptrf);


    int a1[] = {1, 2, 3, 4, 5}, a2 = 10;
    int *ptr1 = a1, *ptr2 = &a2;
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
    printf("%p\n", a1);
    printf("%d\n", a2);
    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
    printf("%p\n", &a1);
    printf("%p\n", &a2);
    printf("%p\n", &ptr1);
    printf("%p\n", &ptr2);   

}