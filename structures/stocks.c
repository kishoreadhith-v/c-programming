#include <stdio.h>

struct item {
    char name[50];
    int quantity;
    float price;
};

void get_items(struct item* led, int n){
    int len = sizeof(led)/sizeof(struct item);
    led = realloc(led, (n + len)*sizeof(struct item));
    for(int i = len; i < n + len; i++){
        printf("Enter the name of the product, quantity and unit price separated by spaces:");
        scanf("%s %d %f",&led[i].name,&led[i].quantity,&led[i].price);
    }
}

void print_items(struct item* led){
    int len = sizeof(led)/sizeof(struct item);
    for(int i = 0; i < len; i++){
        printf("-----\n");
        printf("Item %d", i);
        printf("---\n");
        printf("Name       : %s\n", led[i].name);
        printf("Quantity   : %d\n", led[i].quantity);
        printf("Unit price : %f\n", led[i].price);
    }
}

void print_ith_item(struct item* led, int i){
    printf("-----\n");
    printf("Item %d", i);
    printf("---\n");
    printf("Name       : %s\n", led[i].name);
    printf("Quantity   : %d\n", led[i].quantity);
    printf("Unit price : %f\n", led[i].price);
}

int search_item(struct item* led, char* sname){
    int len = sizeof(led)/sizeof(struct item);
    for (int i = 0; i < len; i++)
    {
        if ((led+i) -> name == sname)
        {
            return i;
        }
    }
    return -1;
}

struct item* greater_than_n(struct item* led, int num){
    int len = sizeof(led)/sizeof(struct item);
    struct item* res = (struct item*)calloc(len, sizeof(struct item));
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if ((led+i) -> quantity < num)
        {
            res[count] = *(led+i);
            count++;
        }
    }
    return res;
}

int main() {
    struct item* ledger = (struct item*)calloc(1, sizeof(struct item));
    ledger[0] = {"Place holder", 1, 0};
    while (1)
    {
        printf("---\n");
        printf("Menu\n");
        printf("---\n");
        printf("a - get_items\n");
        printf("b - print all items\n");
        printf("c - print ith item\n");
        printf("d - search a name\n");
        printf("e - greater than n\n");
        printf("---\n");
        char ch = getch();
        switch (ch)
        {
        case 'a':
            printf("Enter the number of items to input:");
            int n;
            scanf("%d", &n);
            get_items(ledger, n);
            break;
        case 'b':
            print_items(ledger);
            break;
        case 'c':
            printf("Enter the value of i:");
            int n;
            scanf("%d", &n);
            print_ith_item(ledger, n);
            break;
        case 'd':
            char[50] sname;
            gets(sname);
            int n = search_item(ledger, sname);
            if (n == -1)
            {
                printf("Item not found in array\n");
            } else {
                printf("Item found at %d", n);
            }
            

        default:
            break;
        }
    }
        

    return 0;
}