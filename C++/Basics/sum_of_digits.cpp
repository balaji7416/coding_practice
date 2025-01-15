#include<bits/stdc++.h>
using namespace std;

int main(){

    int num , sum = 0;
    cout<<"enter number :";
    cin>>num;
    
    int temp = num , rem;

    while(temp != 0){

        rem = temp%10;
        sum+=rem;
        temp/=10;

    }

    cout<<"sum of digits :"<<sum;
}