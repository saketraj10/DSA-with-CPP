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
    cout<<endl;

    for(int i=1; i<n; i++){
        int j = i;
        // while(j>=1){
        //     if(arr[j] >= arr[j-1]){
        //         break;
        //     }
        //     else{
        //         swap(arr[j],arr[j-1]);
        //         j--;
        //     }
        // }
        //or different way
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}