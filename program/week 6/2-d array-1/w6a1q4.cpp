#include<iostream>
#include<climits>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the size of row: "<<endl;
    cin>>r;
    cout<<"enter the size of column: "<<endl;
    cin>>c;

    int a[r][c];
    cout<<"enter the element of 2d array: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    int max = INT_MIN;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(max < a[i][j]){
                max = a[i][j];
            }
        }
    }
    cout<<max;
}