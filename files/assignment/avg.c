#include <stdio.h>
#include <stdlib.h>

float file_avg(FILE * file){
    int sum = 0, count = 0;
    char str[15];
    while (fgets(str, 15, file))
    {
        sum += atoi(str);
        count++;
    }
    return sum/(float)count;
}

int main(){
    FILE * fp = fopen("avg_test.txt", "r");
    printf("%f", file_avg(fp));
}