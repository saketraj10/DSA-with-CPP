#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,6,4,3,2,1,-96,-4,0};
    int n = 9;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}