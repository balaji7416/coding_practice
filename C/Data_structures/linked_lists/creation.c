#include <stdio.h>
#include<stdlib.h>

typedef struct node {

    int num;
    struct node* next;

}node;

int main() {
     
    node *head=NULL,*new_node,*temp;
    int choice = 1;
    while(choice == 1 || choice == 2){

        new_node = (node*)malloc(sizeof(node));

        printf("enter data : ");
        scanf(" %d",&new_node->num);

        if(head == NULL){
            head = new_node;
            new_node->next = NULL;
        }
        else{
           
            temp = head;
            while(temp->next != NULL){
                temp = temp -> next;
            }
            temp->next = new_node;
            new_node->next = NULL;
        }
        printf("choose :\n");
        printf("1. continue adding\n");
        printf("2.print linked list\n");
        printf("3.stop\n");
        scanf("%d",&choice);

        if(choice == 2){
            
            temp = head;
            while(temp != NULL){
                printf("%d ->",temp->num);
                temp = temp->next;
            }
            printf(" NULL\n");
        }

    }


        


    
    return 0;
}