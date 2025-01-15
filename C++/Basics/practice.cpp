#include<bits/stdc++.h>
using namespace std;

void swap(int &num1, int &num2){
   num1 = num1^num2;
   num2 = num1^num2;
   num1 = num1^num2;
}

int main(){

    int num1,num2;
    cout<<"enter num1:";
    cin>>num1;

    cout<<"enter num2:";
    cin>>num2;

    swap(num1,num2);

    cout << "num1:"<<num1<<'\n';
    cout << "num2:"<<num2<<'\n';

}