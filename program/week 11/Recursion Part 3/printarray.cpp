#include<iostream>
#include<vector>
using namespace std;
void printarray(int arr[], int i, int n){
    if(i==n) return;
    printarray(arr,i+1,n);
    cout<<arr[i]<<" ";
}
// void display(vector<int>& v, int i){
//     if(i==v.size()) return;
//     cout<<v[i]<<" ";
//     display(v,i+1);
// }
int main(){
    int n;
    cout<<"enter the size of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printarray(arr,0,n);
    cout<<endl;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        v[i]=arr[i];
    }
    //display(v,0);
}