#include <stdio.h>
int main(){

    char str[100];
    int alpha[26]={0};
    int ref;
    printf("enter a string :");
    fgets(str,sizeof(str),stdin);

    for(int i=0; str[i]!='\0'; i++){

        if(str[i]>='a' && str[i]<='z'){

             ref = str[i];
             alpha[ref-'a']+=1;

        }
    }

    for(int i=0; i<26; i++){
        printf("%c : %d\n",'a'+i,alpha[i]);
    }
}