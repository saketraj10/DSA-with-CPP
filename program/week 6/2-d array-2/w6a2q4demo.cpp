#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the positive integer for n for generate n * n matrix: "<<endl;
    cin>>n;

    int m[n][n];
    int k=1; 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(k>n*n) break;
            m[i][j]=k;
            k++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}