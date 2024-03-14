#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter array element: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i] && arr[i]!=max1){
            max2=arr[i];
        }
    }
    if(max2==INT_MIN){
        cout<<"No second element exists"<<endl;
    }
    else{
        cout<<max2<<endl;
    }
    return 0;
}