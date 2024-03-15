#include<iostream>
#include<climits>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the no of rows: "<<endl;
    cin>>r;
    cout<<"Enter the no of cols: "<<endl;
    cin>>c;
    int arr[r][c];
    cout<<"Enter the element of 2d array: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //printing of transpose
    for(int j=0; j<c; j++){
        for(int i=0; i<r; i++){
            cout<<arr[i][j]<<" ";       
        }
        cout<<endl;
    }

    int trans[c][r];
    //store arr to trans array
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            trans[i][j] = arr[j][i];
        }
    }

    cout<<"Display of trans matrix: "<<endl;
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}