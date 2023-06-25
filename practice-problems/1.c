// Finding the position of the character 'a' in a sentence using pointers using function

#include <stdio.h>

int first_a(char* s, int size){
    for (int i = 0; i < size-1; i++)
    {
        if (*(s+i) == 'a')
        {
            return i;
        }
        // printf("%d|", *(s+i) == 'a');
    }   
    return -1;
}

int main(){
    char name[] = "Getsuga Tenshou", *pn;
    pn = name;
    int len = sizeof(name)/sizeof(name[0]);
    // first_a(pn, len);
    printf("%d\n", first_a(pn, len));
}