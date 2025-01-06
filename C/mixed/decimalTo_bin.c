#include<stdio.h>
#include<math.h>
void bin(int num);
int main(){

    int ch ;
    int num;

    printf("enter a number :");
    scanf("%d",&num);

    printf("enter the form you want to convert :\n");
    printf("1.binary\n");
    printf("2.octal\n");
    printf("3.decimal\n");
    printf("4.hexa decimal\n");
    scanf("%d",&ch);
    
    if(ch==1)
   bin(num);

    else if(ch==2)
    printf("%o",num);
    

    else if(ch==3)
    printf("%d",num);

    else if(ch==4)
    printf("%x",num);

    
    
}

void bin(int num){
   
       if(num == 0){
        return;
       }  

       int ans[50];
       int index=0;

       while(num != 0){
        ans[index++] = num%2;
        num/=2;
       }
       for(int i=index-1;i>=0;i--){
        printf("%d",ans[i]);
       }
    
       
          
}