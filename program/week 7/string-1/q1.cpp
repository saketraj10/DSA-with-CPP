#include<iostream>
using namespace std;
int main(){
    char str[6]={'a','b','c'};
    for(int i=0; i<3; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<(int)str[5]<<endl;
    
    for(int i=0; str[i]!='\0'; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str<<endl;

    string s = "pqr xyz";
    for(int i=0; i<7; i++){
        cout<<s[i];
    }
    cout<<endl;

}