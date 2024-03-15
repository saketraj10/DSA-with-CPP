#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the row of matrix: ";
    cin>>r;
    cout<<"enter the col of matrix: ";
    cin>>c;

    int m[r][c];
    cout<<"enter the element of matrix: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>m[i][j];
        }
    }
    cout<<endl;
    int temp[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(m[i][j]==0){
                for(int k=0; k<r; k++){
                    temp[k][j] = 0;
                }
                for(int l=0; l<c; l++){
                    temp[j][l] = 0;
                }
            }
            else if(temp[i][j]==0){
                continue;
            }
            else{
                temp[i][j] = m[i][j];
            }
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}