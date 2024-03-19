//Selection sort
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=i; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }

    cout<<"after selection sort: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}