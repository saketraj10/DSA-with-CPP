#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abadhdsh";
    string t = "aydc";
    cout<<(s<t)<<endl;
    cout<<(s>t)<<endl;
    cout<<s.compare(t)<<endl;
}