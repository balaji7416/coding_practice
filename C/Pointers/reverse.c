#include <stdio.h>
#include<stdlib.h>
int main(){


    char* ptr=(char*)malloc(sizeof(char)*100);

    printf("enter a string :");
    scanf("%s", ptr);

    int len=0;
    while (*(ptr+len) != '\0')
    {
       len++;
    }

    for(int i=0; i<len/2 ; i++){
         char temp=*(ptr+i);
        *(ptr+i) = *(ptr+len-i-1);
        *(ptr+len-i-1) = temp;
    }
    
    printf("reversed string : %s",ptr);

    free(ptr);

}