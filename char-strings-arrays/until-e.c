#include <stdio.h>
int main(){
    char paragraph[1000];
    int i = 0;
    do
    {
        paragraph[i++] = getchar();
    } while ((paragraph[i-1] != 'e')&&(i<999));
    printf("You entered: \n%s\n", paragraph);
    
    return 0;
}