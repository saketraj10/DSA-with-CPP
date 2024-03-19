#include<iostream>
#include<algorithm>
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

    int arr1[n];
    for(int i=0; i<n; i++){
        arr1[i] = arr[i];
    }

    cout<<endl;

    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(arr1[j] > arr1[j+1]){
                swap(arr1[j],arr1[j+1]);
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] == arr1[j]){
                arr[i] = j;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}