#include <stdio.h>
#include<math.h>
int main() {

    int test_cases;
    int temp[1000];
    scanf("%d",&test_cases);

    int operations,length,right,up;
    int extra=0,ref;
    int perimeter;

    for(int i=0; i<test_cases; i++){
         extra = 0;
        scanf("%d %d",&operations,&length);

        for(int j=0; j<operations; j++){
            scanf("%d %d",&right,&up);
            if(j>0){

            ref = (length - right)*(length- up);
            if(ref == 1) 
            extra+=4 ;
            if(ref == 2) 
            extra+=6 ;
            if(ref>=3) 
            extra+=2*(floor((ref-3)/2))+8;
            }
     
        }
        perimeter = (length*4)*operations - extra;
        temp[i] = perimeter;

    }

    for(int i=0;i<test_cases;i++){
        printf("%d\n",temp[i]);
    }


    return 0;
}