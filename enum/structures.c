#include <stdio.h>

struct student{
    char name[50];
    int rollno;
};


int main(){
    struct student r;
    printf("Enter name and roll of stud:");
    scanf("%s %d", r.name, &r.rollno);
    printf("%s|%d", r.name, r.rollno);
}