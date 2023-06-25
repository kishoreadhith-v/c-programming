#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += *(ptr + i);
    }
    printf("Sum: %d\n", sum);
}
