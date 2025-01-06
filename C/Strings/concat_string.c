#include <stdio.h>
int main(){

    char str1[100],str2[100],str[200];

    printf("enter string 1 :");
    scanf("%s", str1);

    printf("enter string 2 :");
    scanf("%s", str2);

    int len1=0;
    while(str1[len1] != '\0')
    len1++;

    int len2=0;
    while(str2[len2] != '\0')
    len2++;

    for(int i=0; i<len1+len2; i++){

        if(i<len1)
        str[i] = str1[i];

        else
        str[i] = str2[i-len1];
    }

    str[len1+len2] = '\0';

    printf("combined string : %s",str);
}