#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the positive integer for n for generate n * n matrix: "<<endl;
    cin>>n;

    int m[n][n];
    int k=1; 
    int minr = 0;
    int minc = 0;
    int maxr = n-1;
    int maxc = n-1;
    while(k<=n*n){
        for(int i=minc; i<=maxc; i++){
            m[minr][i] = k;
            k++;
        }
        minr++;
        if(k>n*n) break;

        for(int i=minr; i<=maxr; i++){
            m[i][maxc] = k;
            k++;
        }
        maxc--;
        if(k>n*n) break;

        for(int i=maxc; i>=minc; i--){
            m[maxr][i] = k;
            k++;
        }
        maxr--;
        if(k>n*n) break;

        for(int i=maxr; i>=minr; i--){
            m[i][minc] = k;
            k++;
        }
        minc++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}