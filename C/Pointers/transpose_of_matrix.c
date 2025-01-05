#include <stdio.h>
#include<stdlib.h>
int main(){

    int rows,cols;

    printf("enter no.of rows :");
    scanf("%d",&rows);
    printf("enter no.of columns :");
    scanf("%d",&cols);

    int **matrix = (int**)calloc(rows,sizeof(int*));
    for(int i=0; i<rows; i++){
         *(matrix+i) = (int*)calloc(cols,sizeof(int));
    }

    if(matrix == NULL){
        printf("memory allocation failed ");
        return 1;
    }

    printf("enter elements of matrix here : \n");
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for(int i=0;i<rows;i++){
        for(int j=i+1; j<cols; j++){
           int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    printf("transopsed matrix : \n");
       for(int i=0;i<rows;i++){
        for(int j=0; j<cols; j++){
         printf("%d ",*(*(matrix+i)+j));
        }
        printf("\n");
    }

    for(int i=0; i<rows; i++){
        free(matrix+i);
    }
    free(matrix);
    
   
}