#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr=(int*)calloc(50,sizeof(int));
    int num;

    if(ptr == NULL){
    printf("memory allocation failed");
    return 1;
    }
    
    printf("how many numbers you want to enter :");
    scanf("%d",&num);
    
    printf("enter numbers here :\n");
    for(int i=0; i<num; i++){
        scanf("%d", (ptr+i));
    }
    
    int min=*(ptr); 
    int max=*(ptr); 
    
    for(int i=1;i<num;i++){
        if(*(ptr+i)<min){
            min=*(ptr+i);
        }
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
    }

    printf("minimun number : %d\n",min);
    printf("maximum number : %d\n",max);

    free(ptr);
    


}
