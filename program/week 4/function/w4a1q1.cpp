#include<iostream>
using namespace std;
int square(int a){
    return a*a;
}
int main(){
    int n;
    cout<<"Enter the square of all natural no enter n value: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<square(i)<<endl;
    }
}