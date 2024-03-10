#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    int num = n;
    int fact = 1;
    int last = 0;
        for(int i = 1; i <= n; i++){
            fact *= i;
            cout<<fact<<endl;
        }
    
}