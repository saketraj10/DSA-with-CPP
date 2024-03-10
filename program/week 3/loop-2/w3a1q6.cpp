#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    int num = n;
    int r = 0;
    int last = 0;
    while(n>0){
        r *= 10;
        last = n%10;
        r += last;
        n /= 10;
    }
    cout<<num+r;
}