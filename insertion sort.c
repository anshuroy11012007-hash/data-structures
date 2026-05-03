#include <stdio.h>
#include <stdlib.h>
void is(int arr[], int n){
    int i,j;
   for (i=1; i<n; i++){
       int key= arr[i];
       j=i-1;
       while (j>= 0 && arr[j]> key){
           arr[j+1]= arr[j];
           j = j -1;
       }
       arr[j+1]=key;
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
    is(arr,n);
    printf("\nsorted array:\n");
    print (arr,n);
    return 0;
}