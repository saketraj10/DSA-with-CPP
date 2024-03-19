#include<iostream>
using namespace std;
int main(){
    int n; //9
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int arr[n];  //1 2 4 5 9 15 18 21 24
    cout<<"enter the element of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    int k; // 20
    cout<<"enter any value for k for finding the lower bound of k: "<<endl;
    cin>>k;

    for(int i=0; i<n; i++){
        if(arr[i] > k){
            cout<<arr[i-1]<<endl; // 18
            break;
        }
        // if(arr[i] > k){
        //     cout<<arr[i]<<endl; // 21
        //     break;
        // }
    }
}