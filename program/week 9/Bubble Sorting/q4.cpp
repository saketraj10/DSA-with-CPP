#include<iostream>
using namespace std;
int main(){
    //int arr[] = {5,6,4,3,2,1,-96,-4,0};
    int arr[] = {-54, -4, 0, 1, 2, -33, 4, 5, 6 };
    int n = 9;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}