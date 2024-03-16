#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;

    cin.ignore();

    string s1;
    getline(cin,s1);
    cout<<s1<<endl; 
}