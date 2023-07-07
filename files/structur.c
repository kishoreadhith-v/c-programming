#include <stdio.h>

struct student
{
    int roll;
    char name[50];
};

int main(){
    struct student r[3] = {{1, "a"}, {2, "b"}, {3, "c"}};
    FILE * file;
    file = fopen("stud.bin", "wb");
    fwrite(r, sizeof(struct student), 3, file);
    fclose(file);
    file = fopen("stud.bin", "rb");
    fread(r, sizeof(struct student), 3, file);
    for(int i = 0; i < 3; i++){
        printf("%d %s\n", r[i].roll, r[i].name);
    }
}