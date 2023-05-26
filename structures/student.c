#include <stdio.h>

struct Student
{
    char name[50], rollno[7], phno[11];
    int age;
    float marks[6];
};

void printStudent(struct Student stud)
{
    printf("-----------------------------------\n");
    printf(" Name          : %s\n", stud.name);
    printf(" Roll number   : %s\n", stud.rollno);
    printf(" Phone number  : %s\n", stud.phno);
    printf(" Age           : %d\n", stud.age);
    printf(" Marks         : \n");
    for (int i = 0; i < 6; i++)
    {
        printf("                 %f\n", stud.marks[i]);
    }
    
    printf("-----------------------------------\n");
}

int main()
{
    struct Student s;
    printf("Enter the rollno of the student: ");
    gets(s.rollno);
    printf("Enter the name of the student: ");
    gets(s.name);
    printf("Enter the age of the student: ");
    scanf("%d", &s.age);
    printf("Enter the 6 marks: \n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &s.marks[i]);
    }
    printf("Enter the phone number of the student: ");
    scanf("\n");
    gets(s.phno);
    printStudent(s);   
        
}
