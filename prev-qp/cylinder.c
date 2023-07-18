#include <stdio.h>

struct cylinder
{
    float radius, height;
};

float volume(struct cylinder c){
    return 3.14 * c.radius * c.radius * c.height;
}

float tsa(struct cylinder c){
    return 2 * 3.14 * c.radius * (c.radius + c.height);
}

float csa(struct cylinder c){
    return 2 * 3.14 * c.radius * c.height;
}

int main(){
    struct cylinder c;
    printf("Enter radius and height: ");
    scanf("%f %f", &c.radius, &c.height);
    printf("Volume: %f\n", volume(c));
    printf("TSA: %f\n", tsa(c));
    printf("CSA: %f\n", csa(c));
}