#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 4, 5, 6, 7, 9, 10, 11, 12, 13};
    int low = 0, high = 1;
    int target = 10;
    while(arr[high] < target){
        low = high;
        high *= 2;
    }

    bool flag = false;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            flag = true;
            break;
        }
        else if(arr[mid] < target) low = mid + 1;
        else high = mid -1;
    }
    if(flag){
        cout<<"target is found"<<endl;
    }
    else{
        cout<<"target is not found"<<endl;
    }
    return 0;
}