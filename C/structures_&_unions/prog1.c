#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[50];
    int  roll;
}student;
int main(){
   
   int n;
   printf("how many students :");
   scanf("%d",&n);

   student* data = (student*)calloc(n,sizeof(student));

   for(int i=0; i<n; i++){
    printf("enter data of student %d here :\n",i+1);
    printf("Name :");
    scanf("%s",&data[i].name);
    printf("Roll no. :");
    scanf("%d",&data[i].roll);
   }
   printf("\n");
   printf("data stored successfully\n");
   printf("\n");

   printf("data you entered :\n");

   for(int i=0; i<n; i++){

      printf("Student %d :\n",i+1);
      printf("Name : %s\n",data[i].name);
      printf("Roll no. : %d\n",data[i].roll);

   }





}