#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    int id;
};

int main(){
    struct Employee e = {"Raj",  1};
    puts(e.name);
    printf("%d\n", e.id);
    
    struct Employee f = {.name = "John", .id = 2};
    puts(f.name);
    printf("%d\n", f.id);

    struct Employee g;
    strcpy(g.name, "alex");
    g.id = 3;
    puts(g.name);
    printf("%d\n", g.id);

}