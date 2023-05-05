#include <stdio.h>
#include <string.h>

int main(){
    char word[1000], rev[1000];
    // input for the word
    printf("Enter a word: ");
    scanf("%s", word);
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        rev[i] = word[len-i-1];
    }
    rev[len] = '\0';
    strcmp(word, rev) ? printf("Not a palindrome\n") : printf("Palindrome\n");
    return 0;
}