//function prototype for getc()
//int getc(FILE *stream);

// code to get input for one character using getc()
#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    c = getc(stdin);
    printf("You entered: %c\n", c);
    return 0;
}