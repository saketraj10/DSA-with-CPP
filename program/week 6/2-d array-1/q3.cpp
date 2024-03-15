#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the no of rows: "<<endl;
    cin>>r;
    cout<<"Enter the no of cols: "<<endl;
    cin>>c;
    int arr1[r][c];
    int arr2[r][c];
    int arr3[r][c];
    cout<<"Enter the element of 2d array1: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter the element of 2d array2: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout<<"Display the sum of array1 and array2: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}