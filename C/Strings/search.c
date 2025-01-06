#include<stdio.h>

void search(char array[100],char key,int ref);

int main(){

    char str[100],key;
    int ref=0;
    printf("enter the string :");
    fgets(str,sizeof(str),stdin);

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == '\n')
        str[i] = '\0';
    }

    printf("enter the letter to be searched :");
    scanf(" %c", &key);

    search(str,key,ref);
}

// void search(char array[100],char key){
//     int pos;
//     for(int i=0; array[i] != '\0'; i++){
//         if(array[i] == key)
//          pos=i;
//     }
//     printf("position of key is : %d",pos);
// }

void search(char array[100],char key, int ref){

  if(array[ref] == '\0')
  return;

  if(array[ref] == key)
  printf("position of key is at : %d\n",ref);

  ref++;
  
  search(array,key,ref);
}