#include<stdio.h>
int main(){
    char array[100];
    int len=0;

    printf("enter a string here :");
    fgets(array,sizeof(array),stdin);

    for (int i = 0;array[i] != '\0'; i++)
    {
        if(array[i] == '\n')
        array[i] = '\0';
    }
    

    printf("original string : %s \n",array);

    for(int i=0; array[i] != '\0'; i++){
        len+=1;
    }

    for(int i=0; i<len/2; i++){
        char temp = array[i];
        array[i] = array[len-1-i];
        array[len-1-i] = temp;    
    }

    
    printf("reverse string : %s \n",array);
    

}