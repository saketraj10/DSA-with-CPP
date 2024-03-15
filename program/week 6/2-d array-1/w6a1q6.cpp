#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the odd number: ";
    cin>>n;

    int a[n][n];
    cout<<"enter the element of 2d array: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i==n/2) || (j==n/2)){
                cout<<a[i][j]<<" ";
            }
            cout<<"  ";
        }
        cout<<endl;
    }    
}