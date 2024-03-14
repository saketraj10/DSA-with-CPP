#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2, 2, 4, 1, 9};

    for(int i=0; i<5; i++){
       if (arr[i - 1] > arr[i]){
        cout<<"NO"<<endl;
        return 0;
        }
        }
        // No unsorted pair found
        cout<<"YES"<<endl;
        return 0;
}