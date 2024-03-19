#include<iostream>
using namespace std;
int main(){
    int n; //8
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int arr[n];  // 0 1 2 3 4 8 9 12
    cout<<"enter the  element of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    //find non negative missing element

    for(int i=0; i<n; i++){
        if(arr[i] != i){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
     
}  