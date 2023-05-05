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