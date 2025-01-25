#include<bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node* next;
    struct node* prev;
};
typedef struct node Node;

int main() {
    
    Node *head = NULL, *temp, *newnode;
    char ch;
    while(1){
        newnode = (Node*)malloc(sizeof(Node));
        newnode->next = NULL;
        newnode->prev = NULL;

        if(head == NULL){
            head = newnode;
        }
        else{
        temp = head;
        while(temp->next != NULL){
            temp = temp ->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
        
        
        }

        cout<<"don you want to continue (y/n):";
        cin>>ch;
        
        if(ch == 'n' || ch=='N' ){
            break;
        }
    }
    temp = head;
    while (temp  != NULL){
        cout<<temp->data<<" -> ";
    }
    free(temp);
    return 0;
}