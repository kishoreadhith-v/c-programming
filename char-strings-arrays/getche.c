//function prototype for getche()
//int getche(void);

// code to get input for one character using getche()
#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    printf("Enter a character: ");
    c = getche();
    printf("You entered: %c\n", c);
    return 0;
}