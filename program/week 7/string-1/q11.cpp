#include<iostream>
//#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int size = s.length();

    cout<<s.substr(size/2);

}