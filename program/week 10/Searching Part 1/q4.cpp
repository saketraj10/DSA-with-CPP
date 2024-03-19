#include<iostream>
using namespace std;
int main(){
    int n; //13
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int arr[n];  //1 2 2 3 3 3 3 3 4 4 5 8 9
    cout<<"enter the element of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    int k; // 3
    cout<<"enter any value for k: "<<endl;
    cin>>k;

    int lo = 0;
    int hi = n-1;
    bool flag = true;
    while(lo<=hi){
        //int mid = (lo + hi)/2;
        //or 
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == k){
            if(arr[mid-1] == k){
                hi = mid-1;
            }
            else{
                cout<<mid<<endl;
                flag = false;
                break;
            }
        }
        else if(arr[mid] > k){
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    if(flag){
        cout<<-1<<endl;
    }
    return 0;
    
}