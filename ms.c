#include <stdio.h>
#include <stdlib.h>
void merge (int arr[], int l,int m, int r){
    int i,j,k;
    int n1 = m - l +1;
    int n2 = r - m;
    int left[n1], right[n2];
    
    for(i=0; i< n1 ; i++){
        left[i] = arr[l + i];
        for(j = 0; j<n2; j++){
            right[j] = arr[m + 1 + j];
            i=0; j=0; k= l;
            while(i<n1 && j<n2){
                if (left[i] <= right[j]){
                    arr[k] = left[i];
                    i++;
                }
                else{
                    arr[k] = right[j];
                    j++;
                }
                k++;
            }
            while (i<n1){
                arr[k]= left[i];
                i++; k++;
            }
            while (j<n2){
                arr[k] = right[j];
                j++; k++;
            }
        }
    }
}

void ms(int arr[], int l, int r){
    if(l<r){
        int m= l + (r - l)/2;
        ms(arr, l,m);
        ms(arr, m + 1, r);
        merge(arr, l, m , r);
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
    ms(arr, 0, n-1);
    printf("\nsorted array: ");
    print (arr, n);  
    return 0;       }
