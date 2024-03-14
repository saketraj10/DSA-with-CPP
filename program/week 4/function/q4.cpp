#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter the size of pascal triangle: ";
    cin>>m;
    
    vector<vector<int>> v;
    for(int i=1; i<=m; i++){
        vector<int> a(i);
        v.push_back(a);
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<=i; j++){
            if(j==0||j==i){
                v[i][j] = 1;
            }
            else{
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<=i; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}