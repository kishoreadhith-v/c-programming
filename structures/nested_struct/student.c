#include <stdio.h>
#include <stdlib.h>
struct Location{
    int lat, lon;
};

struct Address {
int doorno, pincode;
char stname[50], city[50];
struct Location loc;
};

struct Student{
	char *name, *rollno;
	struct Address a;
};

void get_student(struct Student * reg, int n){
    int len = sizeof(reg) / sizeof(struct Student);
    reg = realloc(reg, (n + len)*sizeof(struct Student));
    for (int i = 0; i < n; i++)
    {
        printf("Enter student name, rollno, doorno, pincode, stname, city, latitude, logitude all separated by spaces");
        scanf("%s %s %d %d %s %s %d %d", &(reg[i].name), &(reg[i].rollno), &(reg[i].a.doorno), &(reg[i].a.pincode), &(reg[i].a.stname), &(reg[i].a.city), &(reg[i].a.loc.lat), &(reg[i].a.loc.lon));
    }
    
}
void get_point(struct Location *p){
    printf("Enter the latitude and longitude separated by spaces:");
    scanf("%d %d", &p->lat, &p->lon);
}

int main(){
    struct Location l;
    get_point(&l);
    printf("%d %d", l.lat, l.lon);
}