#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the row of matrix: "<<endl;
    cin>>n;
    cout<<"enter the column of matrix: "<<endl;
    cin>>m;

    int A[n][m];

    cout<<"enter the element of matrix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>A[i][j];
        }
    }

    int l1,r1;
    int l2,r2;

    cout<<"enter the l1 value: "<<endl;
    cin>>l1;
    cout<<"enter the r1 value: "<<endl;
    cin>>r1;
    cout<<"enter the l2 value: "<<endl;
    cin>>l2;
    cout<<"enter the r2 value: "<<endl;
    cin>>r2;

    int sum =0;
        for(int i=min(l1,l2); i<=max(l1,l2); i++){
            for(int j=min(r1,r2); j<=max(r1,r2); j++){
                sum += A[i][j];
            }
        }
    cout<<sum;
}