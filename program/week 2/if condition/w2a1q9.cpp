#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character: "<<endl;
    cin>>ch;

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        cout<<"Alpabet"<<endl;
    }
    else if(ch >= '0' && ch <= '9' ){
        cout<<"Digit"<<endl;
    }
    else{
        cout<<"Special character"<<endl;
    }
}