#include<iostream>
using namespace std;
int findIndx(int arr[], int currIdx, int n, int target){
    if(currIdx==n) return -1;
    if(arr[currIdx]==target) return currIdx;
    return findIndx(arr,currIdx+1, n, target);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Target value: ";
    cin>>target;

    cout<<findIndx(arr, 0, n, target);

    return 0;
}