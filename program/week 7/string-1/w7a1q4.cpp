#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: "<<endl;
    cin>>s;

    int size = s.length();
    reverse(s.begin()+size/2, s.end());
    cout<<s<<endl;
}