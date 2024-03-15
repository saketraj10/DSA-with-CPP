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

    for(int i=0; i<r; i++){
        if(i%2 == 0){
            for(int j=0; j<c; j++){
                cout<<m[i][j]<<" ";
            }
        }
        else{
            for(int j=c-1; j>=0; j--){
                cout<<m[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}