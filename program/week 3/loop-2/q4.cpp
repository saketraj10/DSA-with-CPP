#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    int fact = 1;
    while(n>0){
        fact *= n;
        n--;
    }
    cout<<"Factorial is "<<fact<<endl;
    
}