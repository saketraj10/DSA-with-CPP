#include<iostream>
using namespace std;
int sumOfOdd(int a, int b){
    if(a>b) return 0;
    if(a%2==0) return sumOfOdd(a+1, b);
    return a+sumOfOdd(a+2,b);
}
int main(){
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<sumOfOdd(a,b);
}