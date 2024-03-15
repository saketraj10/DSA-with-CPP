#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the row of matrix: "<<endl;
    cin>>r;
    cout<<"enter the col of matrix: "<<endl;
    cin>>c;
    
    int m[r][c];
    cout<<"enter the element of matrix: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>m[i][j];
        }
    }
    cout<<endl;

    for(int j=0; j<c; j++){
        if(j%2==0){
            for(int i=r-1; i>=0; i--){
                cout<<m[i][j]<<" ";
            }
        }
        else{
            for(int i=0; i<r; i++){
                cout<<m[i][j]<<" ";
            }
        }
    }
}