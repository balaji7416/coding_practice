#include<stdio.h>
int main(){
    int array[10],n;
    printf("how many elements : ");
    scanf("%d",&n);
    printf("enter elments of array here : \n");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

    printf("array before sort :\n");
    for ( int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }

    // bubble sort logic

    for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++){

        if(array[j] > array[j+1]){
            int temp= array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }

    }
    }
    printf("\n");
     printf("array after sort :\n");
    for ( int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }

    
}