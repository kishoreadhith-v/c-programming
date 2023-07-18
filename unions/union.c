#include <stdio.h>

union student{
    char name[50];
    int rollno;
};

struct stud{
    char name[50];
    int rollno;
};

union two{
    int a;
    char b[4];
};

int main(){
    union student r;
    struct stud s;
    // printf("%ld | %ld", sizeof(union student), sizeof(struct stud));
    // printf("Enter name and roll of stud:");
    // scanf("%s %d", r.name, &r.rollno);
    // printf("%s|%d", r.name, r.rollno);
    //
    union two t;
    scanf("%d", &t.a);
    printf("%d\t", t.a);
    printf("%d\t", t.b[0]);
    printf("%d\t", t.b[1]);
    printf("%d\t", t.b[2]);
    printf("%d\t", t.b[3]);
}