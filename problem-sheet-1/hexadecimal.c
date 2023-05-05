#include <stdio.h>
int main(){
    int num;
    // input for number
    printf("Enter a number: ");
    scanf("%d", &num);
    // printing the number in hexadecimal
    printf("The number in hexadecimal is: %x\n", num);
    return 0;
}