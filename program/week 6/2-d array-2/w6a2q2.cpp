#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >>n;

    int arr[n][n];
    cout << "Enter the elements of matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int j=0; j<n; j++){
        for(int i=0; i<n/2; i++){
            swap(arr[i][j],arr[n-1-i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
}