#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: "<<endl;
    cin>>n;

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
            cout<<"*";
        for(int l=n-i; l>=1; l--){
            cout<<" ";
        }
        for(int m=n-i; m>1; m--){
            cout<<" ";
        }
            cout<<"*";
        cout<<endl;
    }
    
    for(int i=1; i<=n; i++){
        cout<<" ";
    }
    cout<<"*";
}