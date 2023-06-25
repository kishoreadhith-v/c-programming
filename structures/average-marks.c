#include <stdio.h>


struct Student{
    char name[50];
    float marks[6], avg;
};

void printAverage(struct Student s){
    float sum = 0;
    for (int j = 0; j < 6; j++)
    {
        sum += s.marks[j];
    }
    s.avg = sum/6;
    printf("---------------------------------------------------------\n");
    printf("Name       : %s\n", s.name);
    printf("Marks      : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%.1f\t", s.marks[i]);
    }
    
    printf("Average    : %f\n", s.avg);
    printf("---------------------------------------------------------\n");
}

struct Student arrayAverage(struct Student s[], int len){
    float max = 0;
    for (int i = 0; i < len; i++)
    {
        float sum = 0;
        for (int j = 0; j < 6; j++)
        {
            sum += s[i].marks[j];
        }
        s[i].avg = sum/6;
        max = s[i].avg > max ? s[i].avg : max;
    }
    for (int i = 0; i < len; i++)
    {
        if(s[i].avg == max){
            return s[i];
        }
    }   
}

int main(){
    struct Student s[3];

    for(int i = 0; i < 3; i++){
        printf("Enter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter marks of student %d: ", i+1);
        for (int j = 0; j < 6; j++)
        {
            scanf("%f", &s[i].marks[j]);
        }
    }
        
    for(int i = 0; i < 3; i++){
        printAverage(s[i]);
    }
    printAverage(arrayAverage(s, 3));
}