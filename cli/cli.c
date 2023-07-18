#include <stdio.h>

int main(int reg, char * args[]){
    printf("%d\n", reg);
    int len = sizeof(args)/sizeof(args[0]);
    for(int i = 0; i < len; i++){
        printf("%s\t", args[i]);
    }
}