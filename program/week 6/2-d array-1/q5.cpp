#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of square matrix: ";
    cin>>n;
    int arr[n][n];

    int t[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            t[i][j] = arr[j][i];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

}