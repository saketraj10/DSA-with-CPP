#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    int sum = 0;
    int last = 0;
    while(n>0){
        last = n % 10;
        sum += last;
        n /= 10;
    }
    cout<<"Sum of digit is "<<sum<<endl;
    
}