#include<iostream>
using namespace std;
int main(){
    int n;
    int x;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"enter the value for x to find the last occurrence in the array: "<<endl;
    cin>>x;
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] <= x){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<ans<<endl;
}