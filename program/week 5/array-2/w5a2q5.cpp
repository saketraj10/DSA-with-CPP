#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2, 5, 6, 8, 1};

    for(int i=0; i<5; i++){
        if(i%2==0){
            arr[i] += 10;
        }
        else{
            arr[i] *= 2;
        }
        cout<<arr[i]<<" ";
    }
}