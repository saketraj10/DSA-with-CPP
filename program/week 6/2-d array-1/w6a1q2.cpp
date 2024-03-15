#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the size of row: "<<endl;
    cin>>r;
    cout<<"enter the size of column: "<<endl;
    cin>>c;

    int a[r][c];
    int b[r][c];

    cout<<"enter the element of 1st 2d array: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"enter the element of 2st 2d array: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>b[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            a[i][j] += b[i][j];
        }
    }

    cout<<"sum of two 2d array: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}