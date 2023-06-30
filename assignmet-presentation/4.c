// Write a function that accepts a string and returns the longest palindrome substring in the string.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palindrome(char *word, int len) {
    for (int i = 0; i < len / 2; i++) {
        if (*(word + i) != *(word + len - 1 - i)) {
            return 0;
        }
    }
    return 1;
}

char *longestPalindrome(char *s) {
    int len = strlen(s);
    char *longest = (char *)malloc((len + 1) * sizeof(char));
    longest[0] = '\0'; 

    for (int start = 0; start < len; start++) {
        for (int end = start + 1; end <= len; end++) { 
            char *sub = s + start;
            int sublen = end - start;
            if (palindrome(sub, sublen) && sublen > strlen(longest)) {
                strncpy(longest, sub, sublen);
                
            }
        }
    }
    return longest;
}

int main() {
    char name[] = "amadam racecar";
    printf("%s\n", longestPalindrome(name));
    return 0;
}
