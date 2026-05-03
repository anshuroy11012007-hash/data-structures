#include <stdio.h>
#include <stdlib.h>
void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition (int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++){
        if (arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}
void qs (int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);
        qs(arr, low, pi - 1);
        qs(arr, pi + 1, high);
    }
}
void print(int arr[], int n){
    for (int i=0; i< n; i++){
        printf(" %d ",arr[i]);
    }
}
int main()
{
    int arr[]={2,8,6,87,0,4,6,3};
    int n = 8;
    printf("original array: ");
    print(arr,n);
    qs(arr, 0, n-1);
    printf("\nsorted array: ");
    print (arr, n);  
    return 0;       }
