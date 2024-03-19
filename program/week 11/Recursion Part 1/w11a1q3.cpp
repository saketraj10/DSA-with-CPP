#include<iostream>
using namespace std;
bool checkPower(int n){
    if(n==1) return true;
    if(n%2==0) return checkPower(n/2);
    return false;
}
int main(){
    int n;
    cout<<"enter the positive integer: ";
    cin>>n;
    if(checkPower(n)){
        cout<<"yes it is power of 2"<<endl;
    }
    else{
        cout<<"no it is not power of 2"<<endl;
    }
}