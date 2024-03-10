#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: "<<endl;
    cin>>n;

    
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int k=n-i; k>=1; k--){
            cout<<" ";
        }
        for(int k=n-i; k>1; k--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    for(int i=1; i<=2*n-1; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1; i<=2*n-1; i++){
        cout<<"*";
    }
    cout<<endl;

    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int k=n-i; k>=1; k--){
            cout<<" ";
        }
        for(int k=n-i; k>1; k--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}