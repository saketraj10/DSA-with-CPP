#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter base: "<<endl;
    cin>>a;
    cout<<"Enter power: "<<endl;
    cin>>b;
    int power = 1;
    for(int i = 1; i <= b; i++){
        power *= a;
    }
    cout<<power;
    
}