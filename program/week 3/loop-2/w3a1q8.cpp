#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    int a = 1, b = 1, sum = 0;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n-2; i++){
        sum = a + b;
        a = b;
        cout<<sum<<" ";
        b = sum;
    }
    
}