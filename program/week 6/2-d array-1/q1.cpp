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
    int max = INT_MIN;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<"Maximum of 2d array: "<<max;
    return 0;
}