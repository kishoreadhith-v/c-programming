#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void insert(struct Node ** head, int data){
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = *head;
    *head = newNode;
}

void printlist(struct Node * head){
    struct Node * current = head;
    while(current != NULL){
        printf("%d\t", current -> data);
        current = current -> next;
    }
    printf("\n");
}

void deletelist(struct Node ** head){
    struct Node * current = *head;
    struct Node * next;
    while(current != NULL){
        next = current -> next;
        free(current);
        current = next;
    }
    head = NULL;
}


int main() {
    // Write C code here
    struct Node * head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    printlist(head);
    deletelist(&head);
    return 0;
}