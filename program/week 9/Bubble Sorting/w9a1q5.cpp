#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,4,2,3,5};
    //int arr[] = {1,1,4,3,5};
    int n = 5;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }

    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            cout<<"No"<<endl;
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
}