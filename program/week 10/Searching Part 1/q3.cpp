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
    cout<<"enter any value for k for finding the higher bound of k: "<<endl;
    cin>>k;

    int lo = 0; 
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        //int mid = (lo+hi)/2;
        // or
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == k){
            flag = true;
            cout<<arr[mid+1]<<endl;
            break;
        }
        else if(arr[mid] < k){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    if(flag == false){
        cout<<arr[lo]<<endl;
    }
}