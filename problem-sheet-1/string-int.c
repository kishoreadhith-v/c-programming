#include <stdio.h>
int main(){
    int num;
    char str[100];
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Number: %5d\nString: %s\n", num, str);
    return 0;
}