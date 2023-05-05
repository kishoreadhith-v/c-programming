#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u '|| c =='A' || c =='E'|| c =='I'|| c =='O'|| c =='U'  ? printf("Vowel\n") : printf("Not a vowel\n");
    return 0;
}