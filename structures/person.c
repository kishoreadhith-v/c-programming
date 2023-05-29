#include <stdio.h>


struct Person{
    char name[50];
    float height;
    int age;
};

void printPerson(struct Person p){
    printf("---------------------------\n");
    printf("Name   : %s\n", p.name);
    printf("Height : %.3f\n", p.height);
    printf("Age    : %d\n", p.age);
    printf("---------------------------\n");
}

int main(){
    struct Person people[3] = {
        {"Luffy", 174.2, 19},
        {"Zoro", 181, 21},
        {"Sanji", 180, 21},
    };
    for(int i = 0; i < 3; i++)
    {
        printPerson(people[i]);
    }

    struct Person p1[3];
    struct Person p2[3];
    struct Person p3[3];

    p1[0] = (struct Person) {"John", 167, 21};
    p1[1] = (struct Person) {"Alex", 172, 22};
    p1[2] = (struct Person) {"Michael", 181, 20};

    for(int i = 0; i < 3; i++)
    {
        printPerson(p1[i]);
    }

    p2[0] = (struct Person) {.name = "Shanks", .height = 200, .age = 41};
    p2[1] = (struct Person) {.name = "Beckmann", .height = 210, .age = 52};
    p2[2] = (struct Person) {.name = "Yasopp", .height = 190, .age = 51};

    for(int i = 0; i < 3; i++)
    {
        printPerson(p2[i]);
    }
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%s %f %d", &p3[i].name,  &p3[i].height, &p3[i].age);
    }

    
    

    for(int i = 0; i < 3; i++)
    {
        printPerson(p3[i]);
    }    
}