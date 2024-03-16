#include<iostream>
using namespace std;
int main(){
    int x = 1234754;
    string s = to_string(x);
    cout<<s<<endl;
    int total_digit = s.length();
    cout<<total_digit<<endl;
}