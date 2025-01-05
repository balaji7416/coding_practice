#include <stdio.h>
void swap(int* num1,int* num2);
int main(){

    int num1,num2;

    printf("enter num1 :");
    scanf("%d",&num1);

    printf("enter num2 :");
    scanf("%d",&num2);

    swap(&num1,&num2);

    printf("num1 : %d\n",num1);
    printf("num2 : %d\n",num2);
    
}

void swap(int* num1,int*num2){
    *num1=*num1^*num2;
    *num2=*num1^*num2;
    *num1=*num1^*num2;
    
}