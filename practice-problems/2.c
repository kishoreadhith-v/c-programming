// Sorting of names using array of pointers.

#include <stdio.h>
#include <string.h>

int main(){
    char *names[] = {"John", "Luffy", "Zoro", "Sanji", "Nami", "Robin", "Usopp", "Brook"};
    int len = sizeof(names)/sizeof(names[0]);
    char *temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
    for(int i = 0; i< len; i++)
    {
        printf("%s\t", *(names+i));
    }
}