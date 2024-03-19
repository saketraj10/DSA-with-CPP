#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //brute force ts= O(n)
    // for(int i=0; i<n-1; i++){
    //     if(arr[i] ==  arr[i+1]){
    //         cout<<arr[i]<<endl;
    //         break;
    //     }
    // }

    //using binary search
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == arr[mid + 1] || arr[mid] == arr[mid-1]){
            cout<<arr[mid]<<endl;
            break;
        }
        else if(arr[mid] == mid){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return 0;
}