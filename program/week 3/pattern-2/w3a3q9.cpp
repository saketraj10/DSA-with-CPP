#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<" ";
    }
    cout<<"*";
    cout<<endl;

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=1; k<=i-1; k++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=1; k<=i-1; k++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
        

    }
    for(int l=1; l<=2*n+1; l++){
            cout<<"*";
        }
        cout<<endl;

    for(int i=1; i<=n-1; i++){
        for(int k=1; k<=i; k++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=n-i-1; k>=1; k--){
            cout<<" ";
        }
        cout<<"*";
        for(int k=n-i-1; k>=1; k--){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        cout<<" ";
    }
    cout<<"*";
    cout<<endl;
}