#include<stdio.h>
int main(){
	
	char array[100];
	int vowel_count=0,consonent_count=0,alpha_count=0,digit_count=0,special_count=0,space_count=0,ref;
	
	printf("enter a word or sentence here :");
	fgets(array,sizeof(array),stdin);
	
//	int len=sizeof(array)/sizeof(array[0]);
//	printf("len :%d\n",len);
	
	char vowel[]={'a','e','i','o','u'};
	char space[]={' '};
	
	
	for(int i=0; array[i] != '\0'; i++){
		
	
		if((array[i]>='a' && array[i]<='z') || (array[i]>='A' && array[i]<='Z')){
		
		alpha_count+=1;
		ref=vowel_count;
		
		for(int j=0; j<5; j++){
			
			if(array[i] == vowel[j])
			vowel_count+=1;
	        
		}
		 if(vowel_count == ref)
		 consonent_count+=1;
		
			
		}
		
		
		
		else if(array[i]>='0' && array[i]<='9')
		digit_count+=1;
		
		else if(array[i]==' ')
		space_count+=1;
		
		else if(array[i] != '\n')
		special_count +=1;
		
		
	}
	
	printf("no.of alphabets : %d\n",alpha_count);
	printf("     no.of consonents : %d\n",consonent_count);
	printf("     no.of vowels  : %d\n",vowel_count);
	printf("no of digits : %d\n",digit_count);
	printf("no.of special characters : %d\n",special_count);
	printf("no.of spaces : %d",space_count);
}
