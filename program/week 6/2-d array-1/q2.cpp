#include<iostream>
#include<climits>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the no of rows: "<<endl;
    cin>>r;
    cout<<"Enter the no of cols: "<<endl;
    cin>>c;
    int arr[r][c];
    cout<<"Enter the element of 2d array: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(max1 < arr[i][j]){
                max2 = max1;
                max1 = arr[i][j];
            }
            else if(max2 < arr[i][j] && arr[i][j]!=max1){
                max2 = arr[i][j];
            }
        }
    }
    if(max2 == INT_MIN){
        cout<<"No second element exists"<<endl;
    }
    else{
        cout<<"Second maximum element is "<<max2<<endl;
    }
    return 0;
}