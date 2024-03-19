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

    int count = 0;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == 1){
            count += high - mid + 1 ;
            high = mid - 1;    
        }
        else{
            low = mid + 1;;
        }
    }
    cout<<count<<endl;
}