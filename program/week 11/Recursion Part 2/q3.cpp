#include<iostream>
using namespace std;
int pow(int x, int n){
    if(n==1) return x;
    if(n%2!=0){
        int ans = pow(x,n/2);
        return ans * ans * x;
    }
    else{
        int ans = pow(x,n/2);
        return ans*ans;
    }
}
int main(){
    cout<<pow(3,5);
}