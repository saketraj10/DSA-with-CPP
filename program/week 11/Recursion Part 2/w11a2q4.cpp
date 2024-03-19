#include<iostream>
#include<vector>
using namespace std;
void sumTriangle(vector<int> &arr, int n){
    if(n==0) return;
    vector<int> temp(n-1);
    for(int i=0; i<n; ++i){
        cout<<arr[i]<<" ";
        if(i!=0){
            temp[i-1] = arr[i-1] + arr[i];
        }
    }
    cout<<endl;
    sumTriangle(temp, n-1);
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
        
    sumTriangle(nums, n);

}