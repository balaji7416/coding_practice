#include<stdio.h>
#include<math.h>
int bin(int num);
int main(){

    int ch1,ch2 ;
    int num;

    printf("chooce the format to enter a num :\n");
    printf("1.binary\n");
    printf("2.octal\n");
    printf("3.decimal\n");
    printf("4.hexa decimal\n");
    scanf("%d",&ch1);
    
    printf("enter number :");

    if(ch1==2)
    scanf("%o",&num);
    

    else if(ch1==3)
    scanf("%d",&num);

    else if(ch1==4)
    scanf("%x",&num);

    printf("enter the form you want to convert :");
    printf("1.binary\n");
    printf("2.octal\n");
    printf("3.decimal\n");
    printf("4.hexa decimal\n");
    scanf("%d",&ch2);

    if(ch1==2)
    printf("%o",num);
    

    else if(ch1==3)
    printf("%d",num);

    else if(ch1==4)
    printf("%x",num);

    else
    printf("%d",bin(num));
    
}

int bin(int num){
        int tem[100];
        int rem;
        int len=0;
        int ans=0;
        for(int i=num; i!=0; i++){
           rem=num%2;
           tem[i-num] = rem;
           num/=2;
           len++;
        }
        for(int i=0; i<len; i++){
            ans+=tem[len-i-1]*pow(10,len-i-1);
        }
        return ans;     
          
}