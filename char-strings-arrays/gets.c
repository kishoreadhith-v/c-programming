//function prototype for gets()
//char *gets(char *str);

// code to get input for a string using gets()
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("You entered: %s\n", str);
    return 0;
}