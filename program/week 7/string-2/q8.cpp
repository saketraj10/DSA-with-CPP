#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter any sentence in one line: "<<endl;
    getline(cin,s);

    //int x = stoi(s);
    //cout<<x<<endl;

    long long y = stoll(s);
    cout<<y<<endl;

    return 0;
}