#include<stdio.h>
int main(){
	
	char array[100];
	int small_count=0,capital_count=0;
	
	printf("enter a word or sentence here :");
	fgets(array,sizeof(array),stdin);
	
	int i=0;
	while(array[i] != '\0'){
		
		if(array[i]>='a' && array[i]<='z')
		small_count+=1;
		
		else if(array[i]>='A' && array[i]<='Z')
		capital_count+=1;
		
		i++;
	}
	
	printf("no.of small letters = %d\n",small_count);
	printf("no.of capital letters = %d\n",capital_count);
}
