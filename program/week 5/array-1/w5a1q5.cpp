#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    int min1 = INT_MAX;
    for(int i=0; i<=n-1; i++){
        if(min1>arr[i] && arr[i]>0){
            min1 = arr[i];
        }
    }
    cout<<min1<<endl;
}