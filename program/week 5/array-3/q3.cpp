#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& arr1, vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(n+m);
    int i = 0; //arr1
    int j = 0; //arr2
    int k = 0; //res
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
        }
        else{//arr[i]>arr[j]
            res[k] = arr2[j];
            j++;
        }
        k++;
    }
    //for remaining
    if(i == n){// arr1 ka sara element utta chuka hu
        while(j<=m-1){
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    if(j == m){ //arr2 ka sara element utta chuka h
        while(i<=n-1){
            res[k] = arr1[i];
            i++;
            k++;
        }
    }
    return res;
}
int main(){
    vector<int> arr1;
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(6);
    arr1.push_back(8);
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    vector<int> arr2;
    arr2.push_back(3);
    arr2.push_back(5);
    arr2.push_back(6);
    arr2.push_back(9);
    arr2.push_back(10);
    arr2.push_back(12);
    for(int i=0; i<arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    vector<int> v =  merge(arr1, arr2);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}