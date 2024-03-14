#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2, 5, 9, 4, 3};

    int max1, max2, max3;
    max3 = max2 = max1 = arr[0];

    for(int i=0; i<5; i++){
        if(arr[i]>max1){
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2){
            max3 = max2;
            max2 = arr[i];
        }
        else if(arr[i]>max3){
            max3 = arr[i];
        }
    }

    cout<<"Three largest element of the array are: "<<max1<<", "<<max2<<", "<<max3<<endl; 
}