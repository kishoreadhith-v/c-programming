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