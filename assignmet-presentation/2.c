// Implement a function that accepts a string and returns a dynamically allocated array of characters containing the unique characters in the string, sorted in ascending order.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* unique_sort(char* str){
    int len = strlen(str);
    char* unique = (char*)malloc(sizeof(str));
    int unique_len = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (str[i] == unique[j])
            {
                break;
            }
            *(unique + unique_len) = str[i];
            unique_len++;
        }
        
    }

    return unique;
}

int main(){
    char name[] = "Kishoreadhithaishore";
    printf("%s\n", unique_sort(name));
    return 0;
}