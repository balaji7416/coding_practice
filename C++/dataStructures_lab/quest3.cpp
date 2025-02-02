#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};
// typedef struct node node; not necessary in c++. it we can use its name by default

void push(int data, node** head){
    // node* newnode = (node*)malloc(sizeof(node)); use new function instead of malloc in c++
    node* newnode = new node();
    newnode->data = data ;
    newnode->next = NULL ;

    if(*head == NULL){
        *head = newnode;
    }
    else{
        node* temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void freeList(node* head){
    while(head != NULL){
    node* temp = head;
    head = head->next;
    delete temp;

    }
 head  = NULL; // to prevent dangling pointer. even i dont know what it is but it is good practice to set pointer to null at end
}
int main(){

    set <int> nums;
    node *head = NULL, *temp;
    vector<int> info = {1,2,2,3,3,7,8};

    for(int i=0;i<info.size(); i++){
        push(info.at(i), &head);
    }
    temp = head;
    while(temp != NULL){
        nums.insert(temp->data);
        temp =temp->next;
    }

    //int sum = 0;
    // for(auto num: nums){
    //     sum += num;
    // }

    int sum = accumulate(nums.begin(), nums.end(),0);

    cout<<"sum : "<<sum<<'\n';

    freeList(head);
}