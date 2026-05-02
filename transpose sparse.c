#include <stdio.h>
#define MAX 10

void display ( int matrix[MAX][3]){
    for (int i=0; i<matrix[0][2];i++){
        printf ("%d\t%d\t%d\n", matrix[i][0], matrix[i][1], matrix[i][2]);      }       }

void trans(int matrix[MAX][3], int bt[MAX][3]){
    int n = matrix[0][2];
    bt[0][0] = matrix[0][1];  bt[0][1] = matrix[0][0];  bt[0][2] = n;
    int k=1;
    for (int i=0; i<matrix[0][1]; i++){
        for (int j=1; j<=n; j++){
            if (matrix[j][1] == i){
                bt[k][0] = matrix[j][1];  bt[k][1] = matrix[j][0];  bt[k][2] = matrix[j][2];
                k++;  }       }       }       }

int main (){
    int matrix[MAX][3] = {{0,4,0},{0,0,5},{0,0,1}};
    int bt[MAX][3];
    printf ("Original matrix:\n");
    display (matrix);   
    trans (matrix, bt);
    printf ("Transposed matrix:\n");
    display (bt);
    return 0;       }