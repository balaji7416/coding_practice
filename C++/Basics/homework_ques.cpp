#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int no_of_towns , votes_of_A = 0, temp_sum = 0,count = 0 , largest , ref=0;

     cin>>no_of_towns;
    vector <pair<int,int>> arr(no_of_towns);
    vector <int> sum(arr.size());

   
    for(int i=0; i<no_of_towns; i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    for(int i=0; i<no_of_towns; i++){
        votes_of_A += arr[i].first;
    }
 

    for(int i=0; i<no_of_towns; i++){
        sum[i] = arr[i].first + arr[i].second ;
    }
    
    for(int i=0; i<no_of_towns; i++){
        largest = sum[0];
    for(int j=0;i<no_of_towns;j++){
        
        if(sum[j] >= largest){
            largest = sum[j];
            ref = j;
        }
    
        
    }
    sum[ref] = 0;
    if(temp_sum<=votes_of_A){
         temp_sum += largest;
         votes_of_A -= arr[ref].first;
         count+=1;
    }
    else if(temp_sum > votes_of_A){
        break;
    }
    }



   cout<<count<<endl;


    return 0;
}