#include<bits/stdc++.h>
using namespace std;
int sum(int range){
    int initial = 0,new_initial;
    int sum = 0;
    int count = range;
    while(count>0){
        new_initial = initial*10+1;
        sum+= new_initial;
        initial = new_initial;
        count--;
    }
    return sum;
}

int main(){

    int range;
    cout<<"enter range of series(1,11,111,...) :";
    cin>>range;

    cout<<"sum :"<<sum(range);
}
