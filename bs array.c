#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void bs(int arr[], int n){
    int i,j,temp;
    bool swapped;
    for (i = 0; i < n - 1;i++){
        swapped = false;
        for (j = 0; j < n - i - 1; j++){
          if ( arr[j]> arr[j + 1]  ){
              temp = arr[j];
              arr[j] = arr[ j+1];
              arr[j+1]= temp;
              swapped = true;
          }
        }
        if (swapped == false){
            break;
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
    bs(arr,n);
    printf("\nsorted array:\n");
    print (arr,n);
    return 0;
}