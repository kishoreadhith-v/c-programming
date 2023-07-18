#include <stdio.h>

struct book{
    char *name, *author;
    float price;
}

void costliest(struct book lib[], int n){
    int max_index = 0;
    for (int i = 0; i < n; i++){
        if(lib[i].price > lib[max_index].price){
            max_index = i;
        }
    }
    printf("Costliest book: %s\n", lib[max_index].name);
    printf("Author: %s\n", lib[max_index].author);
    printf("Price: %f\n", lib[max_index].price);
}

int main(){
    struct book lib[10];
    for(int i = 0; i < 10; i++){
        printf("Enter name, author and price: ");
        scanf("%s %s %f", lib[i].name, lib[i].author, &lib[i].price);
    }
    costliest(lib, 10);
}