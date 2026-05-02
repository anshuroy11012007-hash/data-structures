#include <stdio.h>
#define MAX 10

void display ( int matrix[MAX][3]){
    for (int i=0; i<matrix[0][2];i++){
        printf ("%d\t%d\t%d\n", matrix[i][0], matrix[i][1], matrix[i][2]);      }       }

void add( int a[MAX][3], int b[MAX][3], int sum[MAX][3]){
    int i=1, j=1, k=1;
    if (a[0][0]!=b[0][0] || a[0][1]!=b[0][1]){
        printf ("Matrices cannot be added\n");
        return;
    }

    sum[0][0] = a[0][0];  sum[0][1] = a[0][1];  
    while (i <= a[0][2] && j <= b[0][2]){
        if (a[i][0] == b[j][0] && (a[i][1] == b[j][1])){
            sum[k][0] = a[i][0];  sum[k][1] = a[i][1];  sum[k][2] = a[i][2] + b[j][2];  
            i++;  j++;  k++;    }

        else if (a[i][0] < b[j][0] || (a[i][0]==b[j][0] && a[i][1] < b[j][1])){
            sum[k][0] = a[i][0];  sum[k][1] = a[i][1];  sum[k][2] = a[i][2];
        i++;  k++;    }

        else {
            sum[k][0] = b[j][0];  sum[k][1] = b[j][1];  sum[k][2] = b[j][2];
        j++;  k++;    }       }

    while (i <= a[0][2]){
        while (j <= b[0][2]){
             sum[k][0] = b[j][0];  sum[k][1] = b[j][1];  sum[k][2] = b[j][2];
        j++;  k++;    }
        sum[0][2] = k-1;      }     }

    int main (){
    int matrix1[MAX][3] = {{0,0,4},{2,0,0},{0,0,0}};
    int matrix2[MAX][3] = {{0,0,4},{0,1,5},{0,0,0}};
    int sum[MAX][3];
    display (matrix1);
    display (matrix2);
    add (matrix1, matrix2, sum);
    printf ("Result of addition:\n");
    display (sum);
    return 0;       }