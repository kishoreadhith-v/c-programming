# C programming notes
Kishoreadhith V
19z232 - I BE CSE G1
---
## Table of contents
|                      Topic                      	| Page 	|
|:-----------------------------------------------:	|:----:	|
| Basic structure of a C program and header files 	| 2    	|
| Data types and format specifiers                	| 4    	|
| Loops in C                                      	| 6    	|
| Ternary operator                                	| 12   	|
| Bitwise operators                               	| 12   	|
| Arrays                                          	| 14   	|
| Strings                                         	| 15   	|
| Functions                                       	| 16   	|
| Recursion                                       	| 17   	|
| Switch case                                     	| 18   	|
| Structures                                      	| 19   	|
| Pointers                                        	| 22   	|
| Problems Sheet 1                                	| 25   	|
| Problems Sheet 2                                	| 29   	|
| Problems Sheet 2                                	| 29   	|
| Problems Sheet 2                                	| 29   	|

---

## Basic structure of a C program and header files

- Header Files:

A C program often includes one or more header files at the beginning of the source code. Header files provide function prototypes and definitions for the functions used in the program. They typically have a ".h" extension. Examples of commonly used header files are stdio.h, stdlib.h, and math.h. Header files are included using the `#include` preprocessor directive.
Local files can also be imported.
```c
#include "myheader.h"
```


- Function Declarations:

After the header file inclusion, you can declare your own functions or external functions used in your program. Function declarations specify the return type, name, and parameter types (if any) of the function. For example:

```c
int add(int a, int b);  // Function declaration
void printMessage();    // Another function declaration
```
- Main Function:

Every C program must have a main function, which serves as the entry point for execution. It is where the program starts running. The main function has a specific format:
```c
int main()
{
    // Statements and function calls
    return 0;
}
```

---
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
---
## Data types and format specifiers
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

### Edit configs in C:

`%[a-zA-Z]`\
Accepts input until any character other than the mentioned character appears(**a-z** and **A-Z**)
`%[^a-zA-Z]`\
Accepts input until any of the mentioned character appears(**a-z** and **A-Z**)

---
## Loops in C:

1. for Loop:
The for loop is used to repeatedly execute a block of code a specified number of times.

Syntax:
```c
for (initialization; condition; increment/decrement) {
    // Code to be executed
}
```
example:
```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
```
Output: 1 2 3 4 5

2. while Loop:
The while loop is used to repeatedly execute a block of code as long as the specified condition is true.

Syntax:

```c
while (condition) {
    // Code to be executed
}
```
example:
```c
int i = 1;
while (i <= 5) {
    printf("%d ", i);
    i++;
}
```
Output: 1 2 3 4 5

3. do-while Loop:
The do-while loop is used to repeatedly execute a block of code at least once, and then continue executing as long as the specified condition is true.

Syntax:
```c
do {
    // Code to be executed
} while (condition);
```
example:
```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while (i <= 5);
```
4. break and continue Statements:
break is used to exit a loop prematurely, while continue is used to skip the remaining code in the loop and proceed to the next iteration.

example
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        break;      // Exit the loop when i equals 3
    }
    if (i == 2) {
        continue;   // Skip the iteration when i equals 2
    }
    printf("%d ", i);
}
```
Output: 1

5. Nested Loops:
C allows loops to be nested, i.e., one loop can be placed inside another loop.


Examples functions using for loop(can also be implemented using other loops):
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




## Prefix vs postfix increment/ decrement:
The prefix increment operator makes the change in the value before assigning it to the variable, while the postfix operator makes the change after the assignment.

Demonstration:
Prefix:

```c
int a=5, b=5,c,d;
c = ++a;
d = b++;
printf("%d %d", c,d);
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

## Operators
### Ternary operator
It is a shorthand way of writing an if-else statement in a single line.
Syntax:
```
condition ? expression1 : expression2;
```
The "condition" is an expression that evaluates to either true or false.
If the condition is true, the value of "expression1" is returned.
If the condition is false, the value of "expression2" is returned.

examples:

Maximum of 2 numbers:
```c
#include <stdio.h>
int main(){
    int n1 = 2, n2 = 5, max;
    max = (n1 > n2) ? n1 : n2;
    printf("Max: %d\n", max);
}
```

Maximum of 3 numbers:
```c
#include <stdio.h>
int main(){
    int n1 = 8, n2 =5, n3 = 7, max;
    max = (n1 > n2) ? (n1 > n3) ? n1 : n3 : (n2 > n3) ? n2 : n3;
    printf("Max: %d\n", max);
}
```

### Bitwise Operators in C

Bitwise operators in C are used to manipulate individual bits of integers at a binary level. They perform operations on each bit of a number independently.

#### 1. AND Operator (`&`)

- Performs a bitwise AND operation between given bits of two operands.
- The result is 1 only if both bits are 1; otherwise, it is 0.
- Example demonstrating the operator:
  ```c
	#include <stdio.h>
	int main(){
	    int a = 5, b = 6;
	    printf("%d\n", 5 & 6);
	    printf("%d\n", 5 && 6);
	}
  ```

#### 2. OR Operator (`|`)

- Performs a bitwise OR operation between given bits of two operands.
- The result is 1 if at least one of the bits is 1; otherwise, it is 0.
- Example demonstrating the operator:
  ```c
	#include <stdio.h>
	int main(){
	    int a = 5, b = 6;
	    printf("%d\n", 5 | 6);
	    printf("%d\n", 5 || 6);
	}
  ```

#### 3. XOR Operator (`^`)

- Performs a bitwise exclusive OR (XOR) operation between given bits of two operands.
- The result is 1 if the bits are different; otherwise, it is 0.
- Example demonstrating the operator:
  ```c
	#include <stdio.h>
	int main(){
	    int a = 5, b = 6;
	    printf("%d\n", 5 ^ 6);
	}
  ```

#### 4. NOT Operator (`~`)

- Performs a bitwise NOT operation, which flips each bit of the operand.
- Changes 1 to 0 and 0 to 1.
- Example demonstrating the operator:
  ```c
	#include <stdio.h>
	int main(){
	    int a = 5, b = 6;
	    printf("%d\n", ~a);
	    printf("%d\n", !a);
	    printf("%d\n", ~b);
	    printf("%d\n", !0);
	    printf("%d\n", ~0);
	}
  ```

#### 5. Left Shift Operator (`<<`)

- Shifts the bits of the left operand to the left by a specified number of positions.
- Vacant positions are filled with zeros.
- Equivalent to multiplying the operand by 2 raised to the power of the number of positions shifted.


#### 6. Right Shift Operator (`>>`)

- Shifts the bits of the left operand to the right by a specified number of positions.
- For unsigned values, vacant positions are filled with zeros.
- For signed values, the sign bit is replicated to fill the vacant positions.
- Equivalent to dividing the operand by 2 raised to the power of the number of positions shifted.
- Example demonstrating the shift operators:
  ```c
	#include <stdio.h>
	int main(){
	    int a = 15, b = 1;
	    printf("%d\n", a << b);
	    printf("%d\n", a << 2);
	    printf("%d\n", a << 3);
	    printf("%d\n", a >> b);
	    printf("%d\n", a >> 2);
	    printf("%d\n", a >> 3);
	}
  ```
### Arrays
Arrays in C are used to store a collection of elements of the same data type in contiguous memory locations. They provide a convenient way to work with a group of related values.

Syntax:
```c
datatype arrayName[arraySize];
```
`datatype` specifies the data type of the elements in the array (e.g., int, float, char).
`arrayName` is the name of the array.
`arraySize` is the number of elements the array can hold.

example:
```c
#include <stdio.h>

int main()
{
    int numbers[5];  // Declaration of an integer array

    // Assigning values to the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Accessing and printing array elements
    printf("Element at index 0: %d\n", numbers[0]);
    printf("Element at index 2: %d\n", numbers[2]);
    printf("Element at index 4: %d\n", numbers[4]);

    return 0;
}
```

## Strings
- A string is a sequence of characters stored in an array. It is terminated by the null character ('\0') which marks the end of the string.
- Strings are represented as character arrays, where each character is stored in a consecutive memory location.
- String literals are enclosed in double quotes ("...") and automatically include the null character at the end.
  syntax:
```c
char str[SIZE];
```
```c
char str[] = "Hello";
```
- The string is automatically sized to accommodate the characters in the initializer, including the null character.
- The `%s` format specifier is used for reading or writing strings.
  
### String Functions:

- strlen(str): Returns the length of the string (excluding the null character).
- strcpy(dest, src): Copies the contents of the source string to the destination string.
- strcat(dest, src): Concatenates the source string to the end of the destination string.
- strcmp(str1, str2): Compares two strings and returns an integer indicating their relationship.
- strchr(str, ch): Searches for the first occurrence of a character in the string and returns its address.

example:
```c
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
```

## Functions in C

Functions in C are blocks of code that can be reused throughout a program. They allow us to modularize code and make it more manageable.

### Function Definition

A function definition consists of the following components:

```c
return_type function_name(parameter1, parameter2, ...) {
    // Code to execute
    return value; // (optional) return a value
}
```
Examples:

Passing an array as an argument:

```c
#include <stdio.h>

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d | ", arr[i]);
    }
    printf("\n");
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
}
```

listing all prime numbers in a given range:

```c
#include <stdio.h>
#include <stdbool.h>
bool isFactor(int n, int x){
    return n % x ==0;
}

bool isPrime(int n){
    for (int i = 2; i < (n/2)+1; i++)
    {
        if (isFactor(n, i))
        {
            return 0;
        }
    }
    return 1;
}

int primeRange(int lower, int upper){
    printf("The primes numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i < upper; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }        
    }    
    return 0;
}

int main(){
    int l, u;
    printf("Enter the lower and the upper limits: \n");
    scanf("%d", &l);
    scanf("%d", &u);
    primeRange(l, u);
}
```
Printing a 2d matrix using a function:

```c
#include <stdio.h>

void printMatrix(int mat[][3], int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++){
            printf("%d | ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[][3] = {1,2,3,4,5, 567, 567,8, 56,78,8};
    int rows = sizeof(mat)/sizeof(mat[0]);
    int cols = sizeof(mat[0])/sizeof(mat[0][0]);
    printMatrix(mat, rows, cols);
}
```

## Recursion

#### Terminologies

- `Stack`: A last-in-first-out datatype. The execution context/ call stack is based on this datatype. 

#### Call stack
It is a stack of all the variables and functions that are being executed currently
#### Recursion

Two main parts of a recursive function:
- Base case: The final case or the case at which the recursion has to be stopped.
- Recursive case: Any case at which the recursion is continued ie. the same function is called. Any case which isn't the base case is probably a recursive case.
Every successive recursive case must have its problem size reduced.
Every recursive case must have the same logic.

Example: recursive function to find factorial
```c
int factorial(int n){
    if (n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
```
Tower of hanoi:

```c
#include <stdio.h>

void hanoi(int n, char source, char destination, char auxilliary){
    if (n == 1)
    {
        printf("Move disc 1 from peg %c to peg %c\n", source, destination);
        return;
    }
    
    hanoi(n -1, source, auxilliary, destination);
    printf("Move disc %d from peg %c to peg %c\n", n, source, destination);
    hanoi(n -1, auxilliary, destination, source);
}

int main(){
    hanoi(4, 'a', 'b', 'c');
}
```

## Switch Case Statement in C

The switch case statement in C is used to select one of many code blocks to be executed based on the value of an expression. Here are some key points about the switch case statement:

#### Syntax

```c
switch (expression) {
    case constant1:
        // Code to execute if expression matches constant1
        break;
    case constant2:
        // Code to execute if expression matches constant2
        break;
    // Add more cases as needed
    default:
        // Code to execute if expression doesn't match any case
}
```
Examples:
Calculator using switch case:

```c
#include <stdio.h>

int main(){
    int a,b;
    char op;
    do{
        printf("Enter the two numbers and option in the format [num1 num2 option]: ");
        printf("Choose one option from the menu\n");
        printf("a : add\ns : subtract\nm : multiply\nd : divide\ne : end\n");
        scanf("%d %d %c", &a, &b, &op);
        switch (op)
        {
        case 'a':
            printf("Sum = %d \n---\n", a + b);
            break;
        case 's':
            printf("Difference = %d \n---\n", a - b);
            break;
        case 'm':
            printf("Product = %d \n---\n", a * b);
            break;
        case 'd':
            printf("Quotient = %d \n---\n", a / b);
            break;
        case 'e':
            printf("Exiting loop\n---\n");
            break;
            
        default:
            printf("%c", op);
            printf("Invalid input, try again...");
            break;
        }
}while(op != 'e');
    return 0;
}
```

## Structures
Structs in C are used to create custom data types that can hold multiple variables of different types as a single unit. They allow you to group related data together.

#### Syntax for declaration

```c
struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
}; // End the structure with a semicolon
```
Example:
```c
struct Student {   // Structure declaration
  char name[50], rollno;       // Member (char variable)
  int myNum;           // Member (int variable)
}; // End the structure with a semicolon
```
Structs to store data related to people:

```c
#include <stdio.h>


struct Person{
    char name[50];
    float height;
    int age;
};

void printPerson(struct Person p){
    printf("---------------------------\n");
    printf("Name   : %s\n", p.name);
    printf("Height : %.3f\n", p.height);
    printf("Age    : %d\n", p.age);
    printf("---------------------------\n");
}

int main(){
    struct Person people[3] = {
        {"Luffy", 174.2, 19},
        {"Zoro", 181, 21},
        {"Sanji", 180, 21},
    };
    for(int i = 0; i < 3; i++)
    {
        printPerson(people[i]);
    }

    struct Person p1[3];
    struct Person p2[3];
    struct Person p3[3];

    p1[0] = (struct Person) {"John", 167, 21};
    p1[1] = (struct Person) {"Alex", 172, 22};
    p1[2] = (struct Person) {"Michael", 181, 20};

    for(int i = 0; i < 3; i++)
    {
        printPerson(p1[i]);
    }

    p2[0] = (struct Person) {.name = "Shanks", .height = 200, .age = 41};
    p2[1] = (struct Person) {.name = "Beckmann", .height = 210, .age = 52};
    p2[2] = (struct Person) {.name = "Yasopp", .height = 190, .age = 51};

    for(int i = 0; i < 3; i++)
    {
        printPerson(p2[i]);
    }
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%s %f %d", &p3[i].name,  &p3[i].height, &p3[i].age);
    }

    
    

    for(int i = 0; i < 3; i++)
    {
        printPerson(p3[i]);
    }    
}
```

Finding average marks of students using a struct:

```c
#include <stdio.h>


struct Student{
    char name[50];
    float marks[6], avg;
};

void printAverage(struct Student s){
    float sum = 0;
    for (int j = 0; j < 6; j++)
    {
        sum += s.marks[j];
    }
    s.avg = sum/6;
    printf("---------------------------------------------------------\n");
    printf("Name       : %s\n", s.name);
    printf("Marks      : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%.1f\t", s.marks[i]);
    }
    
    printf("Average    : %f\n", s.avg);
    printf("---------------------------------------------------------\n");
}

struct Student arrayAverage(struct Student s[], int len){
    float max = 0;
    for (int i = 0; i < len; i++)
    {
        float sum = 0;
        for (int j = 0; j < 6; j++)
        {
            sum += s[i].marks[j];
        }
        s[i].avg = sum/6;
        max = s[i].avg > max ? s[i].avg : max;
    }
    for (int i = 0; i < len; i++)
    {
        if(s[i].avg == max){
            return s[i];
        }
    }   
}

int main(){
    struct Student s[3];

    for(int i = 0; i < 3; i++){
        printf("Enter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter marks of student %d: ", i+1);
        for (int j = 0; j < 6; j++)
        {
            scanf("%f", &s[i].marks[j]);
        }
    }
        
    for(int i = 0; i < 3; i++){
        printAverage(s[i]);
    }
    printAverage(arrayAverage(s, 3));
}
```
Stocks in a store using struct:

```c
#include <stdio.h>

struct item {
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct item ledger[3];
    for(int i = 0; i < 3; i++){
        printf("Enter the name of the product, quantity and unit price separated by spaces:");
        scanf("%s %d %f",&ledger[i].name,&ledger[i].quantity,&ledger[i].price);
    }
    for(int i = 0; i < 3; i++){
        printf("-----\n");
        printf("Item %d", i);
        printf("---\n");
        printf("Name       : %s\n", ledger[i].name);
        printf("Quantity   : %d\n", ledger[i].quantity);
        printf("Unit price : %f\n", ledger[i].price);
    }
    

    return 0;
}
```

## Pointers

consider...

```c
int main(){
    int x = 15;
    int *ptr = &x;
    printf("%d", x);
    printf("%p", ptr);
    printf("%p", *ptr);
}
```

In the above example
- `ptr` is a pointer that points to the address of the variable `x`
- the `&` operator is used to assign the address of `x` to `ptr`
- the `*` operator gives the value of `x` (reverse of `&`)
- the data type of the pointer should be the same as the of the variable it is pointing to.
- 

```c
printf("\nValue: %f : %f\n", f, *ptrf);
printf("Address: %p : %p\n", &f, ptrf);
```

The above snippet shows the different ways to print the value and address of a variable.

---
#### Pointer to an array

```c
int a1[] = {1, 2, 3, 4, 5}, a2 = 10;
int *ptr1 = a1, *ptr2 = &a2; 
```

This snippet shows how to point to an array and how it is different from pointing to just a variable

##### Note:
- When we use just the name of the array, it points to the first element of it. (the `&` is not to be prefixed to the name of the array)

---

#### Pointer arithmetic

Incrementing the pointer of an element of an array gives the next element

#### Array of pointers vs Pointer to an array

|                        **Array of pointers**                        	|             **Pointer to an array**             	|
|---------------------------------------------------------------------	|-------------------------------------------------	|
| `int *p[4]`                                                         	| `int (*p)[4]`                                   	|
| Here, p is an array that can store 4 pointers of type `int`        	| p is a pointer to an array of 4 integers        	|
| p is the address of the first element p[1], which is also a pointer 	| p is the address of the first element (integer) 	|

Example:

Array of pointers example

```c
#include <stdio.h>

int main() {
    int *ip[5];
    int a = 4,b=2,c=6,d=9,e=20;
    ip[0] = &a;
    ip[1] = &b;
    ip[2] = &c;
    ip[3] = &d;
    ip[4] = &e;
    printf("%d\n", *(ip+3));
    printf("%d\n", *(3+ip));
    printf("%d\n", ip[3]);
    printf("%d\n", 3[ip]);
    return 0;
}
```

Sum of all elements in a 2d matrix as a function
```c
#include <stdio.h>

int sum(int *ar[])

int main() {
    int mat[2][3] = {1,2,3,4,5,6};
    int (*p)[3];
    p = mat;
    int sum = 0;
    for(int i = 0; i< 2; i++){
        for(int j = 0; j < 3; j++){
            sum += *(*(p+i)+j);
        }
    }
    printf("sum = %d", sum);
    
    return 0;
}
```

Traversing a 2d arrays using pointers

```c
#include <stdio.h>

int main() {
    int mat[2][3] = {{1,2,3},
                    {4,5,6}};
    int (*p)[3];
    p = mat;
    printf("%d\n", p);
    printf("%d\n", *p[0]);
    printf("%d\n", p+1);
    printf("%d\n", *(p+1)[0]);
    printf("%d\n", *((p+1)+1));
    printf("%d\n", *(*(p+1)+1));
    return 0;
}
```

Sum of all elements in a 2d matrix as a function
```c
#include <stdio.h>

int sum(int *ar[])

int main() {
    int mat[2][3] = {1,2,3,4,5,6};
    int (*p)[3];
    p = mat;
    int sum = 0;
    for(int i = 0; i< 2; i++){
        for(int j = 0; j < 3; j++){
            sum += *(*(p+i)+j);
        }
    }
    printf("sum = %d", sum);
    
    return 0;
}
```
Swapping two variables
```c
#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapPtr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2, b = 5;
    swap(a, b);
    printf("a: %d, b: %d\n", a, b);
    swapPtr(&a, &b);
    printf("a: %d, b: %d\n", a, b);
}
```
## Storage classes
### Static

There are 2 regions in the execution context (or in the memeory)
1. Data segment region
- Unlike the stack, it doesn,t get cleared when the function goes out of scope
- Global and static variable are stored here
- There are initialised and unintitialised groups of variable
1. Stack:
- Memoryis cleared when function goes out of scope
- auto variables are stored here

## Memory hierarchy

1. Hard disk
1. RAM
1. Cache
1. Register

### Register variable:
the variable is stored in the register of the CPU. If required space isn't available, it is simply allocated as a normal auto variable.


## Dynamic Memory Allocation

### malloc()

It is a function used to allocate a specified amount of memory. This function returns a address of the allocated memory which can be caught using a pointer. It takes the number of bytes as an arguement

Examples:

```c
int *p;
    p = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p+i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(p+i));
    }
```

Using array subscript:

```c
int *p;
    p = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", p[i]);
    }
```
### free()
free is used to deallocate the memory allocated. It takes the pointer as the argument.
```c
    free(p);
```

### realloc()

This function is used to reallocate memory to a variable that is already allocated. It takes the pointer to the existing memory and the number of bytes to be reallocated as arguments.

Demonstration:
```c
int *p = (int *)calloc(5,sizeof(int));
printf("Original block of memory: %p\n", p);
int *s = realloc(p, 10*sizeof(int));
printf("larger block of memory: %p\n", s);
int *l = realloc(p, 2*sizeof(int));
printf("smaller block of memory: %p\n", l);
printf("---\n");
printf("original == larger: %d\n", p == s);
printf("original == smaller: %d\n", p == l);
```

Output:

```
Original block of memory: 0x5638f57152a0
larger block of memory: 0x5638f57156d0
smaller block of memory: 0x5638f57152a0
---
original == larger: 0
original == smaller: 1
```

### calloc()
This function allocates contigous memory locations.
example:
```c
int *p = (int *)calloc(5,sizeof(int));
```


function that takes a sentence as input, dynamically allocates memory and count the number of words in it.

## Problem sheets:
## Problem sheet 1

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
```
*
* *
* * *
* * * *
* * * * *
```
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


## Problem sheet 2

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
