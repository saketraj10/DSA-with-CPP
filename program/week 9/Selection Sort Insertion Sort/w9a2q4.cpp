#include<iostream>
#include<algorithm>
using namespace std;
void insertionsort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j=i;
        while(j>=1 && arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
void secondsmallest(int arr[], int n){
    for(int i=n-1; i>0; i--){
        if(arr[i] != arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
}
int arrayIntonum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum *= 10;
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[]={4,3,5,1,5};
    int n=5;

    insertionsort(arr,n);

    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    int arr1[5];
    for(int i=0; i<n; i++){
        arr1[i] = arr[i];
    }
    
    secondsmallest(arr1,n);

    for(int ele : arr1){
        cout<<ele<<" ";
    }
    cout<<endl;

    int a=0; 
    int b=0;
    a = arrayIntonum(arr,n);
    b = arrayIntonum(arr1,n);
    int add = a + b;
    cout<<add<<endl;
    return 0;
}