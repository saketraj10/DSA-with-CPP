#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=2; i<=x; i++){
        f *= i;
    }
    return f;
}
int combination(int x, int y){
    int result;
    result = fact(x)/(fact(y)*fact(x-y));
    return result;
}
int main(){
    int n;
    cout<<"enter the row of pascal triangle: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}