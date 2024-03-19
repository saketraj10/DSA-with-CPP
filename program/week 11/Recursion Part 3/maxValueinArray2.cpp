#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxValue(int arr[], int i, int n){
    if(i==n) return INT_MIN;
    return max(arr[i],maxValue(arr,i+1,n));
}
int main(){
    int n;
    cout<<"enter the size of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<maxValue(arr,0,n);
}