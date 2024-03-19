#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"enter the array in descending order: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    int target;
    cout<<"enter the target value: ";
    cin>>target;

    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            flag = true;
            break;
        }
        else if(arr[mid] > target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(flag){
        cout<<"target is found in array"<<endl;
    }
    else{
        cout<<"target not found in array"<<endl;
    }
    return 0;
}