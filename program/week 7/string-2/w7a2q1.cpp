#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s, temp;
    cout<<"enter any string: "<<endl;
    cin>>s;
    temp = s;
    reverse(temp.begin(),temp.end());
    s += temp;
    cout<<s<<endl;
}