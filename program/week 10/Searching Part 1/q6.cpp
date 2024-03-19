#include<iostream>
using namespace std;
int main(){
    int n; //8
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int arr[n];  // 0 1 2 3 4 8 9 12
    cout<<"enter the  element of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    //find non negative missing element

    int ans = -1;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == mid) low = mid +1;
        else{
            ans = mid;
            high = mid - 1;
        }
    }
    cout<<ans<<endl;

    return 0;
     
}  