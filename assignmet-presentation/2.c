// Implement a function that accepts a string and returns a dynamically allocated array of characters containing the unique characters in the string, sorted in ascending order.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* unique_sort(char* str){
    int len = strlen(str);
    char* unique = (char*)malloc(sizeof(str) + 1);
    int unique_len = 0;
    for (int i = 0; i < len; i++)
    {
        int found = 0;
        for (int j = 0; j < unique_len; j++)
        {
            if (str[i] == unique[j])
            {
                found = 1;
                break;
            }
        }
            if(!found){
                *(unique + unique_len) = str[i];
                unique_len++;
            }
        
    }
    *(unique + unique_len) = '\0';
    // sorting
    for(int i = 0; i < unique_len; i++){
        for(int j = i + 1; j < unique_len; j++){
            if(unique[i] > unique[j]){
                char temp = unique[i];
                unique[i] = unique[j];
                unique[j] = temp;
            }
        }
    }
    return unique;
}

int main(){
    char name[] = "Kishoreadhithaishore";
    printf("%s\n", unique_sort(name));
    return 0;
}