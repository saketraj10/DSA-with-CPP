#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: ";
    getline(cin, s);
    cout<<s<<endl;
    int size = s.length();
    cout<<size<<endl;

    reverse(s.begin(), s.begin()+(size/2));

    cout<<s<<endl;

    

}