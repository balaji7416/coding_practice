#include<bits/stdc++.h>

using namespace std;

void pattern(int rows){
    
    char arr[rows][rows];

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            arr[i][j] = '#';
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows-i-1; j++){
            arr[i][j] = ' ';


        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            cout<<arr[i][j];
        }
        cout<<'\n';
    }
   
}

int main() {
    
    int rows;
    cout<<"how many rows needed :";
    cin>>rows;
    pattern(rows);
    return 0;
}