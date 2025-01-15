#include <stdio.h>
#include<stdlib.h>

typedef struct node {

    int data;
    struct node *next_adresss;
}node;



int main() {

    node *head = NULL, *temp, *new_node;
    int choice = 1;
    while(choice == 1){

        new_node = (node*)malloc(sizeof(node)) ;
        if(head != NULL){

            printf("enter data :");
            scanf("%d",&new_node->data);

            temp = head;
            while(temp->next_adresss != NULL){
                temp = temp->next_adresss;
            }
            temp->next_adresss = new_node;
            new_node->next_adresss = NULL;
        }
        else{
            
            printf("enter data :");
            scanf("%d",&new_node->data);

            head = new_node;
            new_node->next_adresss = NULL;
        }

        printf("choose :\n");
        printf("1.continue adding \n");
        printf("2.display data\n");
        printf("3.exit\n");
        scanf("%d",&choice);

        if(choice == 1){
            continue;
        }   
        if(choice == 2){

            temp = head;
            while(temp != NULL){
                printf("%d -> ",temp->data);
                temp=temp->next_adresss;
            }
            printf("NULL");
        }
        if(choice == 3)
        break;

    }

    temp = head;
    while(temp != NULL){
        node* to_free = temp;
        temp = temp->next_adresss;
        free(to_free);
    }


    return 0;
}