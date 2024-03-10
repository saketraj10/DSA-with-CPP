#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    for(int k=1; k<=n; k++){
        for(int l=1; l<=n-k; l++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}