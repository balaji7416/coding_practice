#include<bits/stdc++.h>

using namespace std;
void can_meet(int x1, int v1 , int x2 , int v2){

    if((x1>x2 && (v1>v2 || v1== v2)) || (x2>x1 && (v2>v1 || v1==v2))){
        cout<<"NO";
    }
    else{
        if((x1-x2)%(v1-v2) == 0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    
}
int main() {
    
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2 ;

    can_meet(x1,v1,x2,v2);
    return 0;
}