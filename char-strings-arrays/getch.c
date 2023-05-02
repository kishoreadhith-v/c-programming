//function prototype for getch()
//int getch(void);

// code to get input for one character using getch()
#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    printf("Enter a character: ");
    c = getch();
    printf("You entered: %c\n", c);
    return 0;
}