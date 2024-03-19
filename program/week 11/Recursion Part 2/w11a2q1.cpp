#include<iostream>
using namespace std;
void printElementsInReverse(int arr[], int currIdx, int n){
    if(currIdx==n) return;
    printElementsInReverse(arr,currIdx+1,n);
    cout<<arr[currIdx]<<" ";
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

    printElementsInReverse(arr, 0, n);

    return 0;
}