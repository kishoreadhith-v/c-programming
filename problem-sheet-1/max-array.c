#include <stdio.h>
int main(){
    int arr[100], n, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // input for the array
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // finding the max
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        } // closing if
        
    }
    printf("The largest element in the array is: %d\n", max);
    return 0;
}