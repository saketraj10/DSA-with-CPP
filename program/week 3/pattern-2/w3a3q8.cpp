#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<" ";
    }
    cout<<1;
    cout<<endl;

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<i+1;
        
        for(int l=1; l<=2*i-1; l++){
            cout<<" ";
        }
        cout<<i+1;
        
        cout<<endl;
    }
}