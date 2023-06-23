# C programming notes

C Programs:
To print “Hello World”
```c
#include <stdio.h>
int main() {
    printf("Hello world");
    return 0;
}
```

To print two numbers, eg: 10 5
```c
#include <stdio.h>
int main() {
    int a = 10, b = 5;
    printf("%d %d", a, b);
    return 0;
}
```
To print two numbers with text
```c
#include <stdio.h>
int main() {
    int a = 10, b = 5;
    printf("The first number is %d and the second is %d", a, b);
    return 0;
}
```

To get a number as input and print it
```c
#include <stdio.h>
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("The number is %d", x);
    return 0;
}
```
Sum of 2 numbers
```c
#include <stdio.h>
int main() {
    int sum, a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum is %d", sum);
    return 0;
}
```
Product of 3 numbers
```c
#include <stdio.h>
int main() {
    int prod, a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    prod = a * b * c;
    printf("The product is %d", prod);
    return 0;
}
```

### Sections in the program :
1. Every C file must have main()
2. Every block of code should be enclosed with {} braces
3. Every statement should end with a semicolon(;)
4. All the pre defined functions should be imported by #include

### How does the C compiler locate the header files ?
When the C compiler encounters a `#include` statement, it searches for the header file in the following directories in the given order until the header file is found:
The current working directory of the source code being compiled.
The directories specified by the -I command-line option or the INCLUDE environment variable.
The standard system directories eg: `C:\MinGW\include` or `C:\CodeBlocks\MinGW\include`
If the header file is still not found, it raises an error.

## Week 2
## Format specifiers and data types cheat sheet
![image](https://github.com/kishoreadhith-v/c-programming/assets/117294726/74649bea-0595-4743-a1f4-440c537d616c)

![image](https://github.com/kishoreadhith-v/c-programming/assets/117294726/b46d8da3-210a-4fab-bbaf-1759ecbb5668)

Celsius to fahrenheit
```c
#include <stdio.h>

int main(){
    float celsius, farenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    farenheit = (celsius * (float)9/5)+32;
    printf("The temperature in farenheit is %.2f", farenheit);
    return 0;
}
```
To print size of each data type
```c
#include <stdio.h>

int main(){
    printf("The sizes of the following types are");
    printf("char: %lu\n", sizeof(char));
    printf("int: %lu\n", sizeof(int));
    printf("float: %lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));
    printf("long double: %lu\n", sizeof(long double));
    printf("short int: %lu\n", sizeof(short int));
    printf("unsigned int: %lu\n", sizeof(unsigned int));
    printf("long int: %lu\n", sizeof(long int));
    printf("long long int: %lu\n", sizeof(long long int));
    printf("long unsigned int: %lu\n", sizeof(long unsigned int));
    printf("long long unsigned int: %lu\n", sizeof(long long unsigned int));
    printf("signed char: %lu\n", sizeof(signed char));
    printf("unsigned char: %lu\n", sizeof(unsigned char));

}
```
output:
![image](https://github.com/kishoreadhith-v/c-programming/assets/117294726/34b97c12-d8cb-4f6a-bb38-513a735f22c1)

## For loop
```c
#include <stdio.h>

int main(){
    int i;
    for(i = 1; i <=10; i++){
        printf("%d\n", i);
    }
}
```
To find the data type which stores upto 2^100:
```c
#include <stdio.h>
#include <math.h>

int main(){
    int i;
    int p;
    for(i = 1; i <=100; i++){
        p = pow(2,i);
        printf("%i for %d \n", p, i);
    }
}
```


Largest power of 2 that can be stored in given data types:
1. int: up to 2^30
1. float: up to 2^127
1. double: up to 2^1023
1. Short int: upto 2^14
1. Long int: 2^62
1. Long long int: 2^62

To store 10 numbers in an array and find their average
```c
#include <stdio.h>

int main ()
{
    
    int i, num[100];
    for(i=0; i< 10; i++){
        printf("Enter %dth number: ", i+1);
        scanf("%d", &num[i]);
    }
    int sum = 0;
    for (i = 0; i < 10; i++){
        sum += num[i];
    }
    printf("The sum is %d and the average is %f", sum, sum/(float) i);
    
    return 0;
}
```


To swap adjacent elements in an array
```c
#include <stdio.h>

int main ()
{
    int temp, arr[] = {1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int m = len/2;
    for(int i = 1; i <= m; i++){
        temp = arr[2*(i-1) + 1];
        arr[2*(i-1) + 1] = arr[2*(i-1)];
        arr[2*(i-1)] = temp;
    }
    for(int i = 0; i < len; i++){
        printf("%d\t", arr[i]);
    }
    
    return 0;
}
```

Array initialisation
```c
#include <stdio.h>

int main()
{
    int arr[3][2] = {11,12,13,14,15};
    for(int i = 0; i< 3; i++){
        for(int j =0; j<2; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

Finding whether C uses row major or column major order

```c

    #include <stdio.h>
    #include <stdbool.h>

    
    int main()
    {
        int a[3][2], b[3][2];
        int a[3][2] = {1,2,3,4,5,6};
        int b[3][2] = {11,12,13,14,15,16};
        // input for a
        printf("Input for a\n-----------\n");
        for(int i = 0; i< 3; i++){
            for(int j =0; j<2; j++){
                printf("input for i = %d and j = %d: ", i,j);
                scanf("%d", &a[i][j]);
            }
        }
        // input for b
        printf("Input for b\n-----------\n");
        for(int i = 0; i< 3; i++){
            for(int j =0; j<2; j++){
                printf("input for i = %d and j = %d: ", i,j);
                scanf("%d", &b[i][j]);
            }
        }
        // printing a
        printf("-----------\n| Matrix a|\n-----------\n");
        for(int i = 0; i< 3; i++){
            printf("|");
            for(int j =0; j<2; j++){
                printf("%4d|", a[i][j]);
            }
            printf("\n");
        }
        printing b
        printf("-----------\n| Matrix b|\n-----------\n");
        int init = &b[0][0];
        bool rowm = true;
        for(int i = 0; i< 3; i++){
            for(int j =0; j<2; j++){
                if(init != &b[i][j]){
                    rowm = false;
                    break;
                }
                init += 4;
            }
        }
        printf("row major order is %d", rowm);

    }
```

Number pyramid

```c
#include <stdio.h>

int main()
{
    int n, spaces;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    for(int i=1; i <= n; i++){
        for(int s=0; s < n - i;s++){
            printf("  ");
        }
        for(int j = 1; j <= i; j++){
            printf(" %d", j);
        }
        for(int j = i - 1; j > 0; j--){
            printf(" %d", j);
        }
        printf("\n");
    }
}
```




Prefix vs postfix increment/ decrement:
The prefix increment operator makes the change in the value before assigning it to the variable, while the postfix operator makes the change after the assignment.

Demonstration:
Prefix:

```c
int a=5, b=5,c,d;
c = ++a;
d = b++;
printf("%d %d", c,d);
```
### Problem sheet 1

1. Write a program to find the sum of the digits of a given number using a while loop.
```c
#include <stdio.h>
int main(){
    int n, copy, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    copy = n;
    while(copy > 0){
        sum += (copy % 10);
        copy /= 10;
    }
    printf("Sum of digits of the number %d is %d\n", n, sum);
    return 0;
}
```
2. Write a program that takes a character as input and uses the ternary operator to print
whether the character is a vowel or a consonant.
```c
#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u '|| c =='A' || c =='E'|| c =='I'|| c =='O'|| c =='U'  ? printf("Vowel\n") : printf("Not a vowel\n");
    return 0;
}
```




3. Write a program that takes an integer as input, which represents a month number (1-12),
and uses the switch statement to print the corresponding month name.
```c
#include <stdio.h>
int main(){
    int month;
    // input for month number
    printf("Enter a month number: ");
    scanf("%d", &month);
    // printing the month
    switch (month)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    default:
    printf("Invalid month number\n");
        break;
    return 0;
    }
}
```
4. Write a program to check if it is a palindrome
```c
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
```






5. Write a program using for to print the following pattern.
*
* *
* * *
* * * *
* * * * *
```c
#include <stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        } // closing inner loop
        printf("\n");
    }
    return 0;
}
```
6. Write a program that takes a 2D array of integers as input and prints the largest element in the array.
```c
#include <stdio.h>
int main(){
    int arr[100], n, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // input for the array
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // finding the max
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        } // closing if
       
    }
    printf("The largest element in the array is: %d\n", max);
    return 0;
}
```
7. Write a program that takes a 2D array of characters as input and prints each element in the array on a new line.
```c
#include <stdio.h>
int main(){
    char arr[100];
    int n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);
    getchar(); // to clear the \n from the previous input
    // input for the array
    printf("Enter the characters\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);
    }
    // printing
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", arr[i]);
    }
    return 0;
}
```
8. Write a program that takes an integer as input and uses the printf function to print the integer in hexadecimal format. Use the %x format specifier to print the hexadecimal number.
```c
#include <stdio.h>
int main(){
    int num;
    // input for number
    printf("Enter a number: ");
    scanf("%d", &num);
    // printing the number in hexadecimal
    printf("The number in hexadecimal is: %x\n", num);
    return 0;
}
```
9. Write a program that takes a string and an integer as input and uses the printf function to print
them. Use the %s format specifier to print the string and the %5d format specifier to print the
integer with a minimum width of 5 characters.
```c
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
```
10. Write a program that generates a random number between 1 and 100 and asks the user to guess the number. Use a do-while loop to keep asking the user for guesses until they correctly guess the number.
```c
#include <stdio.h>
#include <stdlib.h>
int main(){
    // generating random number
    int random = rand() % 100, guess;
    // checking guesses
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        guess == random ? printf("Correct!\n") : guess > random ? printf("Try lower\n") : printf("Try higher\n");
    } while (guess != random);
    return 0;
}
```


### Problem sheet 2

Question 2
Write a C function named sort that takes a 1D integer array as input and sorts the array elements in
ascending order. The function should modify the original array passed as an argument. Implement the
function and provide a sample usage.
Function Signature:
void sort(int arr[], int size);
```c
#include <stdio.h>

void sort(int arr[], int size);
void print(int arr[], int size);


int main() {
    int nums[] = {3,1,6,2,5,7,4,8};
    int len = sizeof(nums) / sizeof(nums[0]);
    sort(nums, len);
    print(nums, len);
    return 0;
}

void sort(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
```

Question 3
Write a program in C to perform the following operations on arrays of strings:

i) Find the length of the shortest string.
ii) Find the length of the longest string.
iii) Calculate the average length of all the strings.
iv) Count the number of strings with a length greater than a given threshold.
Your program should take an array of strings as input and provide a menu-driven interface to perform
these operations. The program should terminate when the user chooses to exit.
Note:
Assume that the maximum number of strings in the array is 100 and the maximum length of each string
is 100 characters. The length of a string should be calculated excluding the null-terminating character
&#39;\0&#39;.
You can use the following function signatures as a reference:
int findShortestString(char arr[][100], int n);
int findLongestString(char arr[][100], int n);
float calculateAverageLength(char arr[][100], int n);
int countStringsAboveThreshold(char arr[][100], int n, int threshold);
Provide the necessary user prompts and handle the input/output accordingly. Write the program code
and the necessary functions to implement the above operations.
```c
#include <stdio.h>
#include <string.h>

int findShortestString(char arr[][100], int n);
int findLongestString(char arr[][100], int n);
float calculateAverageLength(char arr[][100], int n);
int countStringsAboveThreshold(char arr[][100], int n, int threshold);
void getArray(char arr[][100], int n);

int main() {
    int n;
    char op;
    do{
        printf("Enter the number of words to be input: ");
    scanf("%d", &n);
    char words[n][100];
    getArray(words, n);
    printf("Choose your option:\na - find the length of the shortest string\nb - find the length of the shortest string\nc - average length of strings\nd - count the number of strings with a length greater than a given threshold.\ne - Exit\n");
    op =getchar();
    switch(op)
    {
        case 'a':
            printf("%d\n", findShortestString(words, n));
            break;
        case 'b':
            printf("%d\n", findLongestString(words, n));
            break;
        case 'c':
            printf("%f\n", calculateAverageLength(words, n));
            break;
        case 'd':
            printf("Enter the threshold: ");
            int threshold = scanf("%d", &threshold);
            printf("%d\n", countStringsAboveThreshold(words, n, threshold));
            break;
        case 'e':
            // exit
            break;
    }
    } while(op != 'e');
    return 0;
}

void getArray(char arr[][100], int n)
{
    scanf("\n");
    for(int i=0; i<n; i++)
    {
        // fflush(stdin);
        gets(arr[i]);
    }
}

int findShortestString(char arr[][100], int n){
    int min = strlen(arr[0]);
    for(int i=1; i< n; i++)
    {
        if(strlen(arr[i]) < min)
        {
            min = strlen(arr[i]);
        }
    }
    return min;
}

int findLongestString(char arr[][100], int n){
    int max = strlen(arr[0]);
    for(int i=1; i< n; i++)
    {
        if(strlen(arr[i]) > max)
        {
            max = strlen(arr[i]);
        }
    }
    return max;
}

float calculateAverageLength(char arr[][100], int n){
    int sum = 0;
    for(int i=0; i< n; i++)
    {
        sum += strlen(arr[i]);
    }
    float avg = sum / (float) n;
    return avg;
    
}

int countStringsAboveThreshold(char arr[][100], int n, int threshold){
    int count = 0;
    for(int i = 0; i< n; i++)
    {
        if(strlen(arr[i]) > threshold)
        {
            count++;
        }
    }
    return count;
}
```

Format specifiers to print octal and hexadecimal numbers
%d - decimal  
%o - octal 
%x - hexadecimal 
```c
#include <stdio.h>

int main()
{
	for(int i = 1; i <= 20; i++)
	{
    	printf("decimal : %d | octal : %o | hexadecimal : %x\n", i,i,i);
	}
	return 0;
}
```

Format specifiers to print octal and hexadecimal numbers
%<number>d - prints the variable inside the given number of spaces
%-<number>d - prints the variable inside [number] spaces left oriented
%.<number>d - prints the variable  with [number] decimals digits
```c
#include <stdio.h>

int main()
{
	for(float i = 1; i <= 20; i++)
	{
    	printf("|%10.4f|\n",i);
	}
	return 0;
}
```

Using the first format specifier in a scanf statement accepts only the first [number] of digits as input

Continue and break
```c
#include <stdio.h>

int main()
{
	for(int i = 1; i <= 2; i++)
	{
    	for(int j = 2; j < 5; j++)
    	{
        	printf("%d", j);
        	if(i % 2 == 0)
            	break;
    	}
}
	return 0;
}
```
Output:
2342


