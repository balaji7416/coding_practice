#include <stdio.h>
#include<stdlib.h>
int strlen(char* str);
void strcp(char* str1, char* str2,char* res);
int main(){

    char* str = (char*)malloc(50*sizeof(char));
    char* concat_str = (char*)malloc(50*sizeof(char));
    char* res = (char*)malloc(100*sizeof(char));
    int ch;
    if(str == NULL){
        printf("memory allocation failed");
        return 1;
    }
    printf("enter string :");
    scanf("%s", str);

    printf("choose the operations you wanna perform :\n");
    printf("1.string length\n");
    printf("2.string concat\n");
    printf("enter your choice :");
    scanf("%d",&ch);

    switch(ch){
        case 1:
        printf("length of string is : %d",strlen(str));
        break;
        case 2:
        printf("enter a string to concat :\n");
        scanf("%s",concat_str);
        strcp(str,concat_str,res);
        printf("your string is : %s",res);
        break;
    }

    free(res);
    free(str);
    free(concat_str);
}

int strlen(char* str){
    int len=0;
    while(*(str+len) != '\0')
    len++;
    
    return len;
}

void strcp(char* str1, char* str2,char* res){
   char* str3;
   int len1=strlen(str1);
   int len2=strlen(str2);
   int len3=len1+len2;

   for(int i=0; i<len3; i++){
    if(i<len1)
    *(res+i) = *(str1+i);
    else
    *(res+i) = *(str2+i-len1);
   }
   *(res+len3)='\0';
   
}