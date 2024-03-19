#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void maxValue(int arr[], int i, int n, int max){
    if(i==n){
        cout<<max<<endl;
        return;
    } 
    if(max<arr[i]){
        max = arr[i];
    }
    maxValue(arr,i+1,n,max);
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
    int max=INT_MIN;
    maxValue(arr,0,n,max);
}