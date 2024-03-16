#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter any string: "<<endl;
    getline(cin, s);
    sort(s.begin(),s.end());
    cout<<s<<endl;
}