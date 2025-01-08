#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rate(int** matrix, int rows, int cols){

    int p,col_index;
    int rating ;

    

    for(int i=0; i<rows; i++){

        p = rand()%(cols/20 +1) +1 ;

        for(int j=0; j<p; j++){
           col_index = rand()%cols ;
           rating = rand()%5 + 1 ;
           matrix[i][col_index] = rating;

        }
    }

}

int main(){
    
    int rows,cols;
    srand(time(NULL));
    printf("how many users :");
    scanf("%d",&rows);

    printf("how many items :");
    scanf("%d",&cols);

    int** matrix = (int**)calloc(rows,sizeof(int*));
    for(int i=0; i<rows; i++){
        matrix[i] = (int*)calloc(cols,sizeof(int));
    }

    rate(matrix,rows,cols);

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<rows; i++){
        free(matrix[i]);
    }
    free(matrix);
}