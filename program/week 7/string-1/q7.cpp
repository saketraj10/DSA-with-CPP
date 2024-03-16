#include<iostream>
#include <algorithm> // for reverse function
using namespace std;
int main(){
    string str = "abcd";
    cout<<str<<endl;
    str.push_back('e');
    str.push_back('f');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;

    str = "saket"+ str;
    cout<<str<<endl;

    reverse(str.begin()+5,str.end()-2);
    cout<<str<<endl;
    reverse(str.begin()+2,str.begin()+4);
    cout<<str<<endl;
}