#include <stdio.h>
#include <stdlib.h>


typedef struct stack_node{
    int data;
    struct stack_node *next;
}stack_node;

void push(stack_node**top,int item);
void pop(stack_node**top);
void topp(stack_node*top);
void display(stack_node*top);


int main() {

    stack_node *top = NULL;
    int choice,item;
    

   
    while(1){

    printf("choose :\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.top\n");
    printf("4.display\n");
    printf("5.Exit\n");

    printf("enter your choice :");
    scanf("%d",&choice);

    switch(choice){

        case 1:
            printf("enter item :");
            scanf("%d",&item);
            push(&top,item);
            break;
        
        case 2:
            pop(&top);
            break;

        case 3:
            topp(top);
            break;

        case 4:
            display(top);
            break;

        case 5:
            printf("exiting...\n");
            exit(2);
            

        default :
        printf("Invlid choice\n");
    }
    }   


    return 0;
}

void push(stack_node**top,int item){
    stack_node* newnode = (stack_node*)malloc(sizeof(stack_node));
    newnode->data = item;
    newnode -> next = *top;
    *top = newnode;
    printf("successfully added\n");
}

void pop(stack_node**top){
    if(*top != NULL){
    *top = (*top)->next;
    printf("popped!!\n");
    }
    else{
        printf("stack empty\n");
    }
}

void topp(stack_node*top){
    if(top != NULL)
    printf("top : %d\n",top->data);

    else
    printf("stack empty\n");
}

void display(stack_node*top){
    while(top != NULL ){
        printf("%d\n",top->data);
        printf("----\n");
        top = top->next;
    }
    printf("NULL\n");
}

