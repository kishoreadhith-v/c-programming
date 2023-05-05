// list of all string function with function prototype
// char *gets(char *str);
// char *fgets(char *str, int n, FILE *stream);
// int puts(const char *str);
// int fputs(const char *str, FILE *stream);
// int printf(const char *format, ...);
// int fprintf(FILE *stream, const char *format, ...);
// int sprintf(char *str, const char *format, ...);

// list of all string functions in string.h with function prototype
// char *strcat(char *dest, const char *src);
// char *strncat(char *dest, const char *src, size_t n);
// char *strchr(const char *str, int c);
// char *strrchr(const char *str, int c);
// char *strcpy(char *dest, const char *src);
// char *strncpy(char *dest, const char *src, size_t n);
// char *strdup(const char *str);
// char *strndup(const char *str, size_t n);
// char *strerror(int errnum);
// char *strpbrk(const char *str1, const char *str2);
// char *strstr(const char *haystack, const char *needle);
// char *strtok(char *str, const char *delim);
// char *strtok_r(char *str, const char *delim, char **saveptr);
// char *strcasestr(const char *haystack, const char *needle);
// char *strsep(char **stringp, const char *delim);
// char *strsignal(int sig);
// char *strfry(char *string);
// char *strerror_r(int errnum, char *buf, size_t buflen);
// char *strtok_r(char *str, const char *delim, char **saveptr);
// char *strsignal(int sig);
// char *strfry(char *string);
// char *strerror_r(int errnum, char *buf, size_t buflen);
// char *strsignal(int sig);
// char *strfry(char *string);
// char *strerror_r(int errnum, char *buf, size_t buflen);
// char *strsignal(int sig);
// char *strfry(char *string);
// char *strerror_r(int errnum, char *buf, size_t buflen);
// char *strsignal(int sig);
// char *strfry(char *string);
// char *strerror_r(int errnum, char *buf, size_t buflen);
// char *strsignal(int sig);
// char *strfry(char *string);

#include <stdio.h>
#include <string.h>
int main(){
    char str[100] = "Hello World";
    printf("%d\n", strlen(str));
    printf("%d\n", sizeof(str));

    char str1[100] = "Hello";
    char str2[100] = "World";
    printf("%s\n", strcat(str1, str2));
    printf("%s\n", strcat(str1, "--"));

    char str3[100] = "Hello";
    char str4[100];
    strcpy(str4, str3);
    printf("%s\n", str4);

    printf("%d\n", strcmp("Hello", "Hello"));
    printf("%d\n", strcmp("Hello", "Hello World"));

    printf("%d\n", strncmp("Hello", "Hello World", 6));
    
    
}
    

