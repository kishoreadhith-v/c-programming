// Write a function that accepts a pointer to a string and removes all the vowels from the string,
// modifying it in-place.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* remove_vowels(char* str){
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || 
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || 
            str[i] == 'U')
        {
            strncpy(str + i, str + i + 1, len - i);
        }        
    }
    return str;
}

int main(){
    char name[] = "amadam racecar";
    printf("%s\n", remove_vowels(name));
    return 0;
}