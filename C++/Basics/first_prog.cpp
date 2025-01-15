#include<iostream>
#include <vector>

using namespace std;

int main() {
    
    int no_of_test_cases;
    int num;
   
  

    cin>>no_of_test_cases;
    vector<int>arr(no_of_test_cases);
    vector<int> possibilities(no_of_test_cases,0);

    for(int i=0; i<no_of_test_cases; i++){
        cin>>arr[i] ;
    }

    for(int i=0;i<no_of_test_cases;i++){

        for(int j=0; j<arr[i]; j++){
            for(int k=0; k<arr[i];k++){
                if(j+k == arr[i]){
                    possibilities[i]+=1;
                }
            }
            
        }
       
    }
    cout<<"\n";
    for(int i=0;i<no_of_test_cases;i++){
        cout<<possibilities[i]<<"\n";
    }


    
}