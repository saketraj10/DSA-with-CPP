#include<iostream>
using namespace std;
int main(){
    int A, B, C;
    cout<<"Enter the marks of A: "<<endl;
    cin>>A;
    cout<<"Enter the marks of B: "<<endl;
    cin>>B;
    cout<<"Enter the marks of C: "<<endl;
    cin>>C;

    if(A<B){
        if(A<C){
            cout<<"\'A\' has the least marks."<<endl;
        }
        else{
            cout<<"\'C\' has the least marks."<<endl;
        }
    }
    else{
        if(B<C){
            cout<<"\'B\' has the least marks."<<endl;
        }
        else{
            cout<<"\'C\' has the least marks."<<endl;
        }
    }
}