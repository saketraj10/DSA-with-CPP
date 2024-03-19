#include<iostream>
using namespace std;
int main(){
    int a[] = {5,0,1,2,0,0,4,0,3};
    int n = 9;

    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i] != 0){
            i++;
        }
        else if(a[j] == 0){
            j--;
        }
        else if(a[i] < a[j]){
            swap(a[i],a[j]);
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}