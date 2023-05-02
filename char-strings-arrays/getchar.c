//function prototype of getchar()
//int getchar(void);

// code to get input for one character using getchar()
#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    c = getchar();
    printf("You entered: %c\n", c);
    return 0;
}   
