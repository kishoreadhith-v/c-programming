#include <stdio.h>

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d | ", arr[i]);
    }
    printf("\n");
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
}


int mata[2][3];
int matb[][3] = {123,45,67,8,9,0};
int matc[2][] = {123,45,67,8,9,0};