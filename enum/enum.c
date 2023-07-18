#include <stdio.h>

enum errorCodes{
    off,
    on = 5
};

int main(){
    enum errorCodes e;
    scanf("%d", (int *) &e);
    switch(e){
        case 0:
            printf("OFF\n");
            break;
        case 5:
            printf("ON\n");
            break;
    }
    printf("%d", e);
}