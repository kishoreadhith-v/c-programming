#include <stdio.h>

struct student{
    char name[50];
    int rollno;
    int marks[50];
}

int main(){
    int n = printf("Enter the number of students:");
    scanf("%d", &n);
    struct student class[n];
    for(int i = 0; i < n; i++){
        printf("Enter the name rollno marks in 5 subjects separated:");
        scanf("%s %d", &class[i].name, &class[i].rollno);
        for(int j = o; j< 5;j++){
            printf("%d", &class[i].marks[j]);
        }
    } 
    FILE * file = fopen("studmarks.")
}