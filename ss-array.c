#include <stdio.h>
#include <stdlib.h>
void ss(int arr[], int n){
    int i,j,min = i,temp;
    for (i = 0; i < n - 1;i++){
        for (j= i + 1; j < n; j++){
            if (arr[j] < arr[min]){
                min = j++;
            }
        }
        if (min != i){
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
void print(int arr[], int n){
    for ( int i=0; i< n ; i++){
        printf(" %d ", arr[i]);
    }
}
int main(){
    int arr[]= {2, 9, 0, 1,99, 81,6,34};
    int n = 8;
    printf("original array:\n");
    print(arr,n);
    ss(arr,n);
    printf("\nsorted array:\n");
    print (arr,n);
    return 0;
}