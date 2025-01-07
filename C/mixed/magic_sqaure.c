#include<stdio.h>
#include<stdlib.h>

void magic(int** magic_sq, int order, int row, int col, int ref);

int main(){

    int order;

    printf("enter order of magic square :");
    scanf("%d",&order);

    if( order%2 ==0){
        printf("only order magic square possible\n");
        return 1;
    }

    int row=0,col=order/2,ref=2;

    int** magic_sq = (int**)calloc(order,sizeof(int*));
    for(int i=0; i<order; i++)
    magic_sq[i] = (int*)calloc(order,sizeof(int));

    magic_sq[0][order/2] = 1;

    magic(magic_sq,order,row,col,ref);

    for(int i=0; i<order; i++){
    for(int j=0; j<order; j++){
        printf("%d ",magic_sq[i][j]);
    }
    printf("\n");
   }

   for(int i=0; i<order; i++)
   free(magic_sq[i]);

   free(magic_sq);



}

void magic(int** magic_sq, int order,int row ,int col, int ref){

if(ref > order*order)
return;

int new_row = (row-1+order)%order ;
int new_col = (col+1)%order ;

if(magic_sq[new_row][new_col] == 0){
    magic_sq[new_row][new_col] = ref;
}

else{
    new_row = (row+1)%order ;
    new_col =col;
    magic_sq[new_row][col] = ref;
}

magic(magic_sq,order,new_row,new_col,ref+1);

}