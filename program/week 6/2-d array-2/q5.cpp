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

    int minr=0;
    int minc=0;
    int maxr=r-1;
    int maxc=c-1;
    while(minr<=maxr && minc<=maxc){
        for(int j=minc; j<=maxc; j++){
            cout<<m[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i=minr; i<=maxr; i++){
            cout<<m[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int j=maxc; j>=minc; j--){
            cout<<m[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr; i>=minr; i--){
            cout<<m[i][minc]<<" ";
        }
        minc++;
    }
}