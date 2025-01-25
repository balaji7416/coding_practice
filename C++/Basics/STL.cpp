#include<bits/stdc++.h>

using namespace std;

int main() {
    
vector <int> arr(10,0);
for(int i=0; i<10; i++){
    arr[i]+=i;
}

arr[0] = 11;
arr[1] = 12;

for(int i=0; i<arr.size();i++){
    cout<<arr[i]<<"\n";
}

sort(arr.begin(),arr.end());

for(int i=0; i<arr.size();i++){
    cout<<arr[i]<<"\n";
}





    return 0;
}