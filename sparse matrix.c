# include <stdio.h> 
int main(){
int matrix [3][4] = { {0,0,1,0}, {2,0,0,8},{0,0,0,7} };

int rows=3, cols=4, size=0;
for (int i=0; i<rows;i++){
    for (int j=0; j< cols; j++){
        if (matrix [i][j]!=0){
            size++;  }      }      }
            
int sm[size][3], k=0;
int i, j;
for (i=0; i<rows; i++){
    for (j=0; j<cols; j++){
        if(matrix[i][j]!=0){
            matrix [k][0]=i;
            matrix [k][1]=j;
            matrix [k][2]= matrix[i][j];
            k++;         }       }      }
            
printf(" matrix is :");
printf("row\tcols\tval\n");
for (i=0; i<size; i++){
printf("%d\t%d\t%d\n", sm[i][0], sm[i][1], sm[i][2]);      }
return 0;       }

