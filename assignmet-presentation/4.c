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
    char *longest = (char *)malloc((len + 1) * sizeof(char)); // Allocate memory for the longest palindrome
    longest[0] = '\0'; // Initialize longest palindrome as an empty string

    for (int start = 0; start < len; start++) {
        for (int end = start + 1; end <= len; end++) { // Include the end index equal to length for the null terminator
            char *sub = s + start;
            int sublen = end - start;
            if (palindrome(sub, sublen) && sublen > strlen(longest)) {
                strncpy(longest, sub, sublen);
                // longest[sublen] = '\0'; // Add null terminator to make it a valid string
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
