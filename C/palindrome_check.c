#include<stdio.h>
int main(){

    char array[100];
    int len=0,ref=0;

    printf("enter a word : ");
    scanf("%s", array);

    for(len; array[len] != '\0'; len++);

    for(int i=0; i<len/2; i++){
        if(array[i] == array[len-i-1])
        ref++;
    }



    if(ref==len/2)
    printf("palindrome");

    else
    printf("not palindrome");
}
