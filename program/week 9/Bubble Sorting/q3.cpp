#include<iostream>
using namespace std;
int main(){
    //int arr[] = {5,6,4,3,2,1,-96,-4,0};
    int arr[] = {-1,0,1,1,4,5,7,8,10};
    int n = 9;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            flag = false;
        }
    }
    if(flag){
        cout<<"sorted"<<endl;
    }
    else cout<<"not sorted"<<endl;
    

}