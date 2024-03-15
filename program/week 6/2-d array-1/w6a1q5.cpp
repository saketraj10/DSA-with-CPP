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

    int index = 0;
    int max = INT_MIN;
    int sum;
    for(int i=0; i<r; i++){
        sum = 0;
        for(int j=0; j<c; j++){
            sum += a[i][j];
        }
        if(max < sum){
            index = i;
            max = sum;
        }
    }

    cout<<index<<endl;
    //cout<<max<<endl;
    //cout<<sum<<endl;
    
}