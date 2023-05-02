#include <stdio.h>
int main(){
    char paragraph[2000];
    int n, m=0, i=0;
    printf("Enter the number of paragraphs: ");
    scanf("%d", &n);
    fflush(stdin);
    do
    {
        paragraph[i++] = getchar();
        if (paragraph[i-1] == '\n')
        {
            m++;
        }
        
    } while ((m<=n)&&(i<999));
    printf("You entered: \n%s\n", paragraph);
}