#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    int last = 0;
    int reverse = 0;
    while(n>0){
        reverse *= 10;
        last = n % 10;
        reverse += last;
        n /= 10;
    }
    cout<<"Reverse is "<<reverse<<endl;
    
}