#include<iostream>
#include<string>
using namespace std;
int main(){
    string name = "Saket Raj";
    string s = "";
    for(int i=0; i<name.length(); i++){
        if(name[i]!='a') s += name[i];
    }
    cout<<s<<endl;
}