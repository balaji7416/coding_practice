#include<bits/stdc++.h>
using namespace std;

void table(int num){
    
    for(int i=1;i<=10;i++){
        cout<<num<<" x "<<i<<"="<<num*i<<'\n';
    }
}

int main(){
    
    int num;
     cout<<"enter table number :";
     cin>>num;

     cout<<'\n';
     table(num);
}