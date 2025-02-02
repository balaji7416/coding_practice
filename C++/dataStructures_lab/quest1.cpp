#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
typedef struct node node;


void push(int data,node **head, node *temp){

    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    if(*head == NULL){
        *head = newnode;
    }
    else{
        temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
int main(){

    node *head1 = NULL, *temp1 , *newnode, *head2 = NULL, *temp2;
    vector<int> info_1 = {5,9,6,4,2,3};
    vector<int> info_2 = {8,1,2};

    for(int i=0; i<info_1.size(); i++){
        push(info_1.at(i),&head1,temp1);
    }
    for(int i=0; i<info_2.size(); i++){
        push(info_2.at(i),&head2,temp2);
    }

    temp1 = head1, temp2 = head2;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    while(temp1 -> data!= 4){
        temp1 = temp1->next;
    }
    temp2->next = temp1;

    
    int len1 = 0, len2 =0;
    temp1 = head1; 
    temp2 = head2;
    while(temp1 != NULL){
        temp1 = temp1->next;
        len1 +=1;
    }
    while(temp2 != NULL){
        temp2 = temp2->next;
        len2 +=1;
    }
    
    temp1 = head1;
    temp2 = head2;
    if(len1>len2){
        for(int i=0; i<len1-len2; i++){
            temp1 = temp1 -> next;
        }
    }
    else if(len2>len1){
         for(int i=0; i<len2-len1; i++){
            temp2 = temp2 -> next;
        }
    }

    while(temp1 != temp2 && temp1 != NULL && temp2 != NULL){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    cout<<"linked at : "<<temp1->data<<endl;

    free(temp1);
    free(temp2);

    return 0;
}